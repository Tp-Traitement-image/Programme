#include "complaint.h"

/**
 * Constructor
 */
Complaint::Complaint()
	: message("")
{

}

/**
 * Constructor by copying
 * @param complaint: Complaint to copy
 */
Complaint::Complaint(const Complaint& complaint)
{
	copy(complaint);
}

/**
 * Copying operator
 * @param complaint: Complaint to copy
 * @return Returns a reference to the instance
 */
const Complaint& Complaint::operator=(const Complaint& complaint)
{
	copy(complaint);

	return *this;
}

/**
 * Copies the given complaint data
 * @param complaint : Complaint to copy
 */
void Complaint::copy(const Complaint& complaint)
{
	message = complaint.message;
}

/**
 * Set the message of the complaint
 * @param value : new message of the complaint
 */
void Complaint::setMessage(const std::string& value)
{
	message = value;
}

/**
 * Returns the message of the complaint
 */
std::string Complaint::getMessage() const
{
	return message;
}