#pragma once
// IWYU pragma private; include "System/SequencePosition.hpp"
#include "System/zzzz__SequencePosition_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::SequencePosition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::SequencePosition::*)(::System::Object*, int32_t)>(&::System::SequencePosition::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa300020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SequencePosition.GetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::SequencePosition::*)()>(&::System::SequencePosition::GetObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa300048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"GetObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SequencePosition.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::SequencePosition::*)()>(&::System::SequencePosition::GetInteger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa300050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"GetInteger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SequencePosition.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::SequencePosition::*)(::System::SequencePosition)>(&::System::SequencePosition::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa300058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"Equals", {}, {::i2c::type_of<::System::SequencePosition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SequencePosition.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::SequencePosition::*)(::System::Object*)>(&::System::SequencePosition::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa300078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::SequencePosition>(),
                    {::i2c::class_of<::System::SequencePosition>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SequencePosition.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::SequencePosition::*)()>(&::System::SequencePosition::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa300104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::SequencePosition>(),
                    {::i2c::class_of<::System::SequencePosition>(), 2}
                ));
    return ___internal_method;
  }
};
inline void System::SequencePosition::_ctor(::System::Object*  object, int32_t  integer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, object, integer);
}
inline ::System::Object* System::SequencePosition::GetObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"GetObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline int32_t System::SequencePosition::GetInteger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"GetInteger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::SequencePosition::Equals(::System::SequencePosition  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SequencePosition>(),
                        {"Equals", {}, {::i2c::type_of<::System::SequencePosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::SequencePosition::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::SequencePosition>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::SequencePosition::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::SequencePosition>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::SequencePosition>"
constexpr  System::SequencePosition::operator ::System::IEquatable_1<::System::SequencePosition>*()  {
return static_cast<::System::IEquatable_1<::System::SequencePosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::SequencePosition>"
constexpr ::System::IEquatable_1<::System::SequencePosition>* System::SequencePosition::i___System__IEquatable_1___System__SequencePosition_()  {
return static_cast<::System::IEquatable_1<::System::SequencePosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_integer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::SequencePosition::SequencePosition(::System::Object*  _object, int32_t  _integer) noexcept  {
this->_object = _object;
this->_integer = _integer;
}
// Ctor Parameters []
constexpr ::System::SequencePosition::SequencePosition()   {
}
