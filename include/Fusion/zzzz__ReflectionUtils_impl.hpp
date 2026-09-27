#pragma once
// IWYU pragma private; include "Fusion/ReflectionUtils.hpp"
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Fusion/zzzz__ReflectionUtils_def.hpp"
#include "Fusion/zzzz__NetworkAssemblyWeavedAttribute_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourWeavedAttribute_def.hpp"
#include "Fusion/zzzz__ReflectionUtils_def.hpp"
#include "Fusion/zzzz__WeaverGeneratedAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetWeavedAttributeOrThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourWeavedAttribute* (*)(::System::Type*)>(&::Fusion::ReflectionUtils::GetWeavedAttributeOrThrow)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5fa1eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetWeavedAttributeOrThrow", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllWeavedAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* (*)()>(&::Fusion::ReflectionUtils::GetAllWeavedAssemblies)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa201c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllSimulationBehaviourTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::Fusion::ReflectionUtils::GetAllSimulationBehaviourTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllSimulationBehaviourTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllWeavedSimulationBehaviourTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::Fusion::ReflectionUtils::GetAllWeavedSimulationBehaviourTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa215c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedSimulationBehaviourTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllNetworkBehaviourTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::Fusion::ReflectionUtils::GetAllNetworkBehaviourTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa21fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllNetworkBehaviourTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllWeavedNetworkBehaviourTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::Fusion::ReflectionUtils::GetAllWeavedNetworkBehaviourTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa229c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedNetworkBehaviourTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils.GetAllWeaverGeneratedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::Fusion::ReflectionUtils::GetAllWeaverGeneratedTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeaverGeneratedTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline T Fusion::ReflectionUtils::GetCustomAttributeOrThrow(::System::Reflection::MemberInfo*  member, bool  inherit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                    {"GetCustomAttributeOrThrow", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, member, inherit);
}
inline ::Fusion::NetworkBehaviourWeavedAttribute* Fusion::ReflectionUtils::GetWeavedAttributeOrThrow(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetWeavedAttributeOrThrow", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourWeavedAttribute*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* Fusion::ReflectionUtils::GetAllWeavedAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils::GetAllSimulationBehaviourTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllSimulationBehaviourTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils::GetAllWeavedSimulationBehaviourTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedSimulationBehaviourTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils::GetAllNetworkBehaviourTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllNetworkBehaviourTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils::GetAllWeavedNetworkBehaviourTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeavedNetworkBehaviourTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils::GetAllWeaverGeneratedTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils*>(),
                        {"GetAllWeaverGeneratedTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils::ReflectionUtils()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa23a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fa39d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5fa3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fa3e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_Collections_Generic_IEnumerator_System_Type__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa3ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa3eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa3f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa3f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::*)()>(&::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa3fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___2__current(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Reflection::Assembly*& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__asm_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__2;
}
constexpr ::System::Reflection::Assembly* const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__asm_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__2;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set__asm_5__2(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asm_5__2 = value;
}
constexpr ::ArrayW<::System::Type*>& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr ::ArrayW<::System::Type*> const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___s__3(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__3 = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set___s__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__type_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__5;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__type_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__5;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set__type_5__5(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_5__5 = value;
}
constexpr ::Fusion::WeaverGeneratedAttribute*& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__weaverGen_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weaverGen_5__6;
}
constexpr ::Fusion::WeaverGeneratedAttribute* const& Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_get__weaverGen_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weaverGen_5__6;
}
constexpr void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__cordl_internal_set__weaverGen_5__6(::Fusion::WeaverGeneratedAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weaverGen_5__6 = value;
}
inline void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_Generic_IEnumerator_System_Type__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7::ReflectionUtils__GetAllWeaverGeneratedTypes_d__7()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa21c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fa33e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5fa3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fa384c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_Collections_Generic_IEnumerator_System_Type__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa3904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa3944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa39d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___2__current(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Reflection::Assembly*& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get__asm_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__2;
}
constexpr ::System::Reflection::Assembly* const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get__asm_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__2;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set__asm_5__2(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asm_5__2 = value;
}
constexpr ::ArrayW<::System::Type*>& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr ::ArrayW<::System::Type*> const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__3;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___s__3(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__3 = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set___s__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get__type_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__5;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_get__type_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__5;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__cordl_internal_set__type_5__5(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_5__5 = value;
}
inline void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_Generic_IEnumerator_System_Type__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4::ReflectionUtils__GetAllWeavedSimulationBehaviourTypes_d__4()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa2308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa2eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5fa2f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fa3254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_Collections_Generic_IEnumerator_System_Type__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa3304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa3344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa334c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa33dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_set___2__current(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* const& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get__type_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__2;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_get__type_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__2;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__cordl_internal_set__type_5__2(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_5__2 = value;
}
inline void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_Generic_IEnumerator_System_Type__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6::ReflectionUtils__GetAllWeavedNetworkBehaviourTypes_d__6()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa2088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa2c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fa2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_Collections_Generic_IEnumerator_System_Reflection_Assembly__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_Generic_IEnumerator_System_Reflection_Assembly__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa2dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Reflection.Assembly>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa2e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_Collections_Generic_IEnumerable_System_Reflection_Assembly__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_Generic_IEnumerable_System_Reflection_Assembly__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa2e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.Generic.IEnumerable<System.Reflection.Assembly>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::*)()>(&::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa2eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Reflection::Assembly*& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Reflection::Assembly* const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set___2__current(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::ArrayW<::System::Reflection::Assembly*>& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::ArrayW<::System::Reflection::Assembly*> const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::System::Reflection::Assembly*& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get__asm_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__3;
}
constexpr ::System::Reflection::Assembly* const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get__asm_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__3;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set__asm_5__3(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asm_5__3 = value;
}
constexpr ::Fusion::NetworkAssemblyWeavedAttribute*& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get__attr_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attr_5__4;
}
constexpr ::Fusion::NetworkAssemblyWeavedAttribute* const& Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_get__attr_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attr_5__4;
}
constexpr void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::__cordl_internal_set__attr_5__4(::Fusion::NetworkAssemblyWeavedAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attr_5__4 = value;
}
inline void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_Generic_IEnumerator_System_Reflection_Assembly__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Reflection.Assembly>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_Generic_IEnumerable_System_Reflection_Assembly__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.Generic.IEnumerable<System.Reflection.Assembly>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::i___System__Collections__Generic__IEnumerable_1___System__Reflection__Assembly__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>"
constexpr  Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::i___System__Collections__Generic__IEnumerator_1___System__Reflection__Assembly__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::Assembly*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllWeavedAssemblies_d__2::ReflectionUtils__GetAllWeavedAssemblies_d__2()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa2128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa2908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5fa295c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_Collections_Generic_IEnumerator_System_Type__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa2b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa2b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa2ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::*)()>(&::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa2c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___2__current(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::ArrayW<::System::Reflection::Assembly*>& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::ArrayW<::System::Reflection::Assembly*> const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr ::System::Reflection::Assembly*& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get__asm_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__3;
}
constexpr ::System::Reflection::Assembly* const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get__asm_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asm_5__3;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set__asm_5__3(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asm_5__3 = value;
}
constexpr ::ArrayW<::System::Type*>& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr ::ArrayW<::System::Type*> const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___s__4(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get___s__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__5;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set___s__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__5 = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get__type_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__6;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_get__type_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__6;
}
constexpr void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::__cordl_internal_set__type_5__6(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_5__6 = value;
}
inline void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_Generic_IEnumerator_System_Type__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3::ReflectionUtils__GetAllSimulationBehaviourTypes_d__3()   {
}
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)(int32_t)>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa2268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa23dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5fa2430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fa277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_Collections_Generic_IEnumerator_System_Type__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa2834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa286c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fa2874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::*)()>(&::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa2904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_set___2__current(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* const& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr ::System::Type*& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get__type_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__2;
}
constexpr ::System::Type* const& Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_get__type_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_5__2;
}
constexpr void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__cordl_internal_set__type_5__2(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_5__2 = value;
}
inline void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_Generic_IEnumerator_System_Type__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr  Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5::ReflectionUtils__GetAllNetworkBehaviourTypes_d__5()   {
}
