#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource_ResourceCost.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource_ResourceCost::*)(::GlobalNamespace::SIResource_ResourceType, int32_t)>(&::GlobalNamespace::SIResource_ResourceCost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae7b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIResource_ResourceCost::*)(::GlobalNamespace::SIResource_ResourceCost)>(&::GlobalNamespace::SIResource_ResourceCost::CompareTo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ae7be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResource_ResourceCost::*)(::GlobalNamespace::SIResource_ResourceCost)>(&::GlobalNamespace::SIResource_ResourceCost::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae78bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResource_ResourceCost::*)(::System::Object*)>(&::GlobalNamespace::SIResource_ResourceCost::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ae7c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIResource_ResourceCost::*)()>(&::GlobalNamespace::SIResource_ResourceCost::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae7d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource_ResourceCost.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIResource_ResourceCost::*)()>(&::GlobalNamespace::SIResource_ResourceCost::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ae7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIResource_ResourceCost::_ctor(::GlobalNamespace::SIResource_ResourceType  type, int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, amount);
}
inline int32_t GlobalNamespace::SIResource_ResourceCost::CompareTo(::GlobalNamespace::SIResource_ResourceCost  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::SIResource_ResourceCost::Equals(::GlobalNamespace::SIResource_ResourceCost  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::SIResource_ResourceCost::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::SIResource_ResourceCost::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::SIResource_ResourceCost::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource_ResourceCost>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr  GlobalNamespace::SIResource_ResourceCost::operator ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResource_ResourceCost::i___System__IComparable_1___GlobalNamespace__SIResource_ResourceCost_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr  GlobalNamespace::SIResource_ResourceCost::operator ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResource_ResourceCost::i___System__IEquatable_1___GlobalNamespace__SIResource_ResourceCost_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::SIResource_ResourceType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "amount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIResource_ResourceCost::SIResource_ResourceCost(::GlobalNamespace::SIResource_ResourceType  type, int32_t  amount) noexcept  {
this->type = type;
this->amount = amount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResource_ResourceCost::SIResource_ResourceCost()   {
}
