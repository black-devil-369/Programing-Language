import sqllite3

# function for creating a connection if database name is known

def create_connection(database_file):
    conn = sqllite3.conect(database_file)
    return conn


# creating a table in our known database

def create_table(conn):
    cursor = conn.cursor()

    cursor.execute('''
    CREATE TABELE IF NOT EXIT users(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER NOT NULL,
    email TEXT NOT NULL,
    address TEXT NOT NULL
    )
    ''')
    conn.commit()

#Function to insert data in the database

def insert_data(conn,name,age,email,address):
    cursor = conn.cursor()
    cursor.execute('''
    INSERT INTO users(name,age,email,address) VAlUES(?,?,?,?)
    ''',(name,age,email,address))
    conn.commit()
    print("Data inserted Succefully")

# Read all data from data base by using the function

def read_data_from_database(conn):
    cursor = conn.cursor()
    cursor.execute('''SELECT * FROM  user''')
    rows = cursor.fetchall()

    return rows

# main function in python for call all function which are write above of line

def main():
    database_name = 'database_name.db' # providing the database file name here
    connection = create_connection(database_name)
    create_table(connection) # This function creating table in you providing database

# Read the all Information about Student and insert inside the database

    print("Enter the Information of database")

    name = input("Name : ")
    age = int(input("Age : "))
    email = input("Email : ")
    address = input("Address : ")

# call the insert function to insert data in the database

    insert_data(connection,name,age,email,address)

    users = read_data_from_database(connection)

    print("\n Print All data from the database is : ")

    for row in users:
        print(f"ID: {row[0]}, Name : {row[1]}, Age : {row[2]}, Email : {row[3]}, Address : {row[4]}")

        connection.close()

# Here call the main function

if __name__ == "__main__":
    main()