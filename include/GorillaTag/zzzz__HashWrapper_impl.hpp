#pragma once
// IWYU pragma private; include "GorillaTag/HashWrapper.hpp"
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::HashWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::HashWrapper::*)(int32_t)>(&::GorillaTag::HashWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HashWrapper.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::HashWrapper::*)()>(&::GorillaTag::HashWrapper::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::HashWrapper>(),
                    {::i2c::class_of<::GorillaTag::HashWrapper>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HashWrapper.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::HashWrapper::*)(::System::Object*)>(&::GorillaTag::HashWrapper::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::HashWrapper>(),
                    {::i2c::class_of<::GorillaTag::HashWrapper>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HashWrapper.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::HashWrapper::*)(int32_t)>(&::GorillaTag::HashWrapper::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::HashWrapper.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GorillaTag::HashWrapper>)>(&::GorillaTag::HashWrapper::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::GorillaTag::HashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::HashWrapper::_ctor(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline int32_t GorillaTag::HashWrapper::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::HashWrapper>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GorillaTag::HashWrapper::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::HashWrapper>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GorillaTag::HashWrapper::Equals(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, i);
}
inline int32_t GorillaTag::HashWrapper::op_Implicit_int32_t(/* [IsReadOnly] */ ::by_ref<::GorillaTag::HashWrapper>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::HashWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::GorillaTag::HashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash);
}
/// @brief Convert operator to "::System::IEquatable_1<int32_t>"
constexpr  GorillaTag::HashWrapper::operator ::System::IEquatable_1<int32_t>*()  {
return static_cast<::System::IEquatable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<int32_t>"
constexpr ::System::IEquatable_1<int32_t>* GorillaTag::HashWrapper::i___System__IEquatable_1_int32_t_()  {
return static_cast<::System::IEquatable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::HashWrapper::HashWrapper(int32_t  hashCode) noexcept  {
this->hashCode = hashCode;
}
// Ctor Parameters []
constexpr ::GorillaTag::HashWrapper::HashWrapper()   {
}
