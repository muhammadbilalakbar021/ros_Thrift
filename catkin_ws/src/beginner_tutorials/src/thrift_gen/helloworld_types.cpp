/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "helloworld_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace HelloWorldService {


hello::~hello() throw() {
}


void hello::__set_number(const int32_t val) {
  this->number = val;
}

void hello::__set_first_Name(const std::string& val) {
  this->first_Name = val;
}

void hello::__set_last_Name(const std::string& val) {
  this->last_Name = val;
}

void hello::__set_age(const int32_t val) {
  this->age = val;
}
std::ostream& operator<<(std::ostream& out, const hello& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t hello::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->number);
          this->__isset.number = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->first_Name);
          this->__isset.first_Name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->last_Name);
          this->__isset.last_Name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->age);
          this->__isset.age = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t hello::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("hello");

  xfer += oprot->writeFieldBegin("number", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->number);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("first_Name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->first_Name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("last_Name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->last_Name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("age", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->age);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(hello &a, hello &b) {
  using ::std::swap;
  swap(a.number, b.number);
  swap(a.first_Name, b.first_Name);
  swap(a.last_Name, b.last_Name);
  swap(a.age, b.age);
  swap(a.__isset, b.__isset);
}

hello::hello(const hello& other0) {
  number = other0.number;
  first_Name = other0.first_Name;
  last_Name = other0.last_Name;
  age = other0.age;
  __isset = other0.__isset;
}
hello& hello::operator=(const hello& other1) {
  number = other1.number;
  first_Name = other1.first_Name;
  last_Name = other1.last_Name;
  age = other1.age;
  __isset = other1.__isset;
  return *this;
}
void hello::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "hello(";
  out << "number=" << to_string(number);
  out << ", " << "first_Name=" << to_string(first_Name);
  out << ", " << "last_Name=" << to_string(last_Name);
  out << ", " << "age=" << to_string(age);
  out << ")";
}

} // namespace