
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_openmbean_CompositeType__
#define __javax_management_openmbean_CompositeType__

#pragma interface

#include <javax/management/openmbean/OpenType.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
          class CompositeType;
          class OpenType;
      }
    }
  }
}

class javax::management::openmbean::CompositeType : public ::javax::management::openmbean::OpenType
{

public:
  CompositeType(::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, JArray< ::javax::management::openmbean::OpenType * > *);
  virtual jboolean containsKey(::java::lang::String *);
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * getDescription(::java::lang::String *);
  virtual ::javax::management::openmbean::OpenType * getType(::java::lang::String *);
  virtual jint hashCode();
  virtual jboolean isValue(::java::lang::Object *);
  virtual ::java::util::Set * keySet();
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = -5366242454346948798LL;
  ::java::util::TreeMap * __attribute__((aligned(__alignof__( ::javax::management::openmbean::OpenType)))) nameToDescription;
  ::java::util::TreeMap * nameToType;
  ::java::lang::Integer * hashCode__;
  ::java::lang::String * string;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_openmbean_CompositeType__