#pragma once
#include <string>

class Complaint
{
private:
	//Message of the complaint
	std::string message;
public:
	/**
	 * Constructor
	 */
	Complaint();

	/**
	 * Constructor by copying
	 * @param complaint: Complaint to copy
	 */
	Complaint(const Complaint& complaint);

	/**
	 * Copying operator
	 * @param complaint: Complaint to copy
	 * @return Returns a reference to the instance
	 */
	const Complaint& operator=(const Complaint& complaint);

	/**
	 * Copies the given complaint data
	 * @param complaint : Complaint to copy
	 */
	void copy(const Complaint& complaint);

	/**
	 * Set the message of the complaint
	 * @param value : new message of the complaint
	 */
	void setMessage(const std::string& value);

	/**
	 * Returns the message of the complaint
	 */
	std::string getMessage() const;
};

