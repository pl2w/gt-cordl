#pragma once
// IWYU pragma private; include "GorillaTag/StaticHashWrapper.hpp"
#include "GorillaTag/zzzz__StaticHashWrapper_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::StaticHashWrapper::*)()>(&::GorillaTag::StaticHashWrapper::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                    {::i2c::class_of<::GorillaTag::StaticHashWrapper>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticHashWrapper::*)(int32_t)>(&::GorillaTag::StaticHashWrapper::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d3692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticHashWrapper::*)(::GorillaTag::StaticHashWrapper)>(&::GorillaTag::StaticHashWrapper::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d3693c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<::GorillaTag::StaticHashWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticHashWrapper::*)(::System::Object*)>(&::GorillaTag::StaticHashWrapper::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                    {::i2c::class_of<::GorillaTag::StaticHashWrapper>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GorillaTag::StaticHashWrapper>)>(&::GorillaTag::StaticHashWrapper::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GorillaTag::StaticHashWrapper>, ::by_ref<::GorillaTag::StaticHashWrapper>)>(&::GorillaTag::StaticHashWrapper::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d3694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GorillaTag::StaticHashWrapper>, int32_t)>(&::GorillaTag::StaticHashWrapper::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d36970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::GorillaTag::StaticHashWrapper>)>(&::GorillaTag::StaticHashWrapper::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d36980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GorillaTag::StaticHashWrapper>, ::by_ref<::GorillaTag::StaticHashWrapper>)>(&::GorillaTag::StaticHashWrapper::op_Inequality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d36990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GorillaTag::StaticHashWrapper>, int32_t)>(&::GorillaTag::StaticHashWrapper::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d369a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticHashWrapper.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::GorillaTag::StaticHashWrapper>)>(&::GorillaTag::StaticHashWrapper::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d369b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GorillaTag::StaticHashWrapper::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::StaticHashWrapper>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GorillaTag::StaticHashWrapper::Equals(int32_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GorillaTag::StaticHashWrapper::Equals(::GorillaTag::StaticHashWrapper  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"Equals", {}, {::i2c::type_of<::GorillaTag::StaticHashWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GorillaTag::StaticHashWrapper::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::StaticHashWrapper>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GorillaTag::StaticHashWrapper::op_Implicit_int32_t(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash);
}
inline bool GorillaTag::StaticHashWrapper::op_Equality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
inline bool GorillaTag::StaticHashWrapper::op_Equality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, int32_t  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
inline bool GorillaTag::StaticHashWrapper::op_Equality(int32_t  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Equality", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
inline bool GorillaTag::StaticHashWrapper::op_Inequality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
inline bool GorillaTag::StaticHashWrapper::op_Inequality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, int32_t  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
inline bool GorillaTag::StaticHashWrapper::op_Inequality(int32_t  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticHashWrapper>(),
                        {"op_Inequality", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::StaticHashWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hash1, hash2);
}
/// @brief Convert operator to "::System::IEquatable_1<int32_t>"
constexpr  GorillaTag::StaticHashWrapper::operator ::System::IEquatable_1<int32_t>*()  {
return static_cast<::System::IEquatable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<int32_t>"
constexpr ::System::IEquatable_1<int32_t>* GorillaTag::StaticHashWrapper::i___System__IEquatable_1_int32_t_()  {
return static_cast<::System::IEquatable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GorillaTag::StaticHashWrapper>"
constexpr  GorillaTag::StaticHashWrapper::operator ::System::IEquatable_1<::GorillaTag::StaticHashWrapper>*()  {
return static_cast<::System::IEquatable_1<::GorillaTag::StaticHashWrapper>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GorillaTag::StaticHashWrapper>"
constexpr ::System::IEquatable_1<::GorillaTag::StaticHashWrapper>* GorillaTag::StaticHashWrapper::i___System__IEquatable_1___GorillaTag__StaticHashWrapper_()  {
return static_cast<::System::IEquatable_1<::GorillaTag::StaticHashWrapper>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_hashcode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::StaticHashWrapper::StaticHashWrapper(int32_t  m_hashcode) noexcept  {
this->m_hashcode = m_hashcode;
}
// Ctor Parameters []
constexpr ::GorillaTag::StaticHashWrapper::StaticHashWrapper()   {
}
