#pragma once
// IWYU pragma private; include "Oculus/Interaction/UniqueIdentifier.hpp"
#include "Oculus/Interaction/zzzz__ValueToClassDecorator_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::UniqueIdentifier::*)()>(&::Oculus::Interaction::UniqueIdentifier::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa443aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.set_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UniqueIdentifier::*)(int32_t)>(&::Oculus::Interaction::UniqueIdentifier::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa443aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"set_ID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UniqueIdentifier::*)(int32_t, ::Oculus::Interaction::Context*)>(&::Oculus::Interaction::UniqueIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa443ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UniqueIdentifier* (*)()>(&::Oculus::Interaction::UniqueIdentifier::Generate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa443aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Generate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UniqueIdentifier* (*)(::Oculus::Interaction::Context*, ::System::Object*)>(&::Oculus::Interaction::UniqueIdentifier::Generate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa443c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Generate", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::UniqueIdentifier*)>(&::Oculus::Interaction::UniqueIdentifier::Release)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa443ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Release", {}, {::i2c::type_of<::Oculus::Interaction::UniqueIdentifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.TryGetInstanceFromIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::Context*, int32_t, ::by_ref<::System::Object*>)>(&::Oculus::Interaction::UniqueIdentifier::TryGetInstanceFromIdentifier)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa443f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"TryGetInstanceFromIdentifier", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier.GetInstanceFromIdentifierAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (*)(::Oculus::Interaction::Context*, int32_t)>(&::Oculus::Interaction::UniqueIdentifier::GetInstanceFromIdentifierAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa443ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"GetInstanceFromIdentifierAsync", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::UniqueIdentifier::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::UniqueIdentifier::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void Oculus::Interaction::UniqueIdentifier::__cordl_internal_set__ID_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ID_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::Context>& Oculus::Interaction::UniqueIdentifier::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::UnityW<::Oculus::Interaction::Context> const& Oculus::Interaction::UniqueIdentifier::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void Oculus::Interaction::UniqueIdentifier::__cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
inline void Oculus::Interaction::UniqueIdentifier::setStaticF_Random(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "Random", ::Oculus::Interaction::UniqueIdentifier*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* Oculus::Interaction::UniqueIdentifier::getStaticF_Random()  {
return ::cordl_internals::getStaticField<::System::Random*, "Random", ::Oculus::Interaction::UniqueIdentifier*>();
}
inline void Oculus::Interaction::UniqueIdentifier::setStaticF__identifierSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_identifierSet", ::Oculus::Interaction::UniqueIdentifier*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* Oculus::Interaction::UniqueIdentifier::getStaticF__identifierSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_identifierSet", ::Oculus::Interaction::UniqueIdentifier*>();
}
inline int32_t Oculus::Interaction::UniqueIdentifier::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UniqueIdentifier::set_ID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"set_ID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UniqueIdentifier::_ctor(int32_t  identifier, ::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, context);
}
inline ::Oculus::Interaction::UniqueIdentifier* Oculus::Interaction::UniqueIdentifier::Generate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Generate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UniqueIdentifier*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::UniqueIdentifier* Oculus::Interaction::UniqueIdentifier::Generate(::Oculus::Interaction::Context*  context, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Generate", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UniqueIdentifier*>(nullptr, ___internal_method, context, instance);
}
inline void Oculus::Interaction::UniqueIdentifier::Release(::Oculus::Interaction::UniqueIdentifier*  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"Release", {}, {::i2c::type_of<::Oculus::Interaction::UniqueIdentifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identifier);
}
inline bool Oculus::Interaction::UniqueIdentifier::TryGetInstanceFromIdentifier(::Oculus::Interaction::Context*  context, int32_t  identifier, ::by_ref<::System::Object*>  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"TryGetInstanceFromIdentifier", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context, identifier, instance);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Oculus::Interaction::UniqueIdentifier::GetInstanceFromIdentifierAsync(::Oculus::Interaction::Context*  context, int32_t  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier*>(),
                        {"GetInstanceFromIdentifierAsync", {}, {::i2c::type_of<::Oculus::Interaction::Context*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(nullptr, ___internal_method, context, identifier);
}
inline ::Oculus::Interaction::UniqueIdentifier* Oculus::Interaction::UniqueIdentifier::New_ctor(int32_t  identifier, ::Oculus::Interaction::Context*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UniqueIdentifier*>(identifier, context));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UniqueIdentifier::UniqueIdentifier()   {
}
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier_Decorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UniqueIdentifier_Decorator::*)()>(&::Oculus::Interaction::UniqueIdentifier_Decorator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa44412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UniqueIdentifier_Decorator.GetFromContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UniqueIdentifier_Decorator* (*)(::Oculus::Interaction::Context*)>(&::Oculus::Interaction::UniqueIdentifier_Decorator::GetFromContext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa443de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::UniqueIdentifier_Decorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UniqueIdentifier_Decorator* Oculus::Interaction::UniqueIdentifier_Decorator::GetFromContext(::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UniqueIdentifier_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UniqueIdentifier_Decorator*>(nullptr, ___internal_method, context);
}
inline ::Oculus::Interaction::UniqueIdentifier_Decorator* Oculus::Interaction::UniqueIdentifier_Decorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UniqueIdentifier_Decorator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UniqueIdentifier_Decorator::UniqueIdentifier_Decorator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Decorator_UniqueIdentifier___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Decorator_UniqueIdentifier___c::*)()>(&::Oculus::Interaction::Decorator_UniqueIdentifier___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4441dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Decorator_UniqueIdentifier___c._GetFromContext_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UniqueIdentifier_Decorator* (::Oculus::Interaction::Decorator_UniqueIdentifier___c::*)()>(&::Oculus::Interaction::Decorator_UniqueIdentifier___c::_GetFromContext_b__1_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4441e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Decorator_UniqueIdentifier___c::setStaticF___9(::Oculus::Interaction::Decorator_UniqueIdentifier___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Decorator_UniqueIdentifier___c*, "<>9", ::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(std::forward<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(value));
}
inline ::Oculus::Interaction::Decorator_UniqueIdentifier___c* Oculus::Interaction::Decorator_UniqueIdentifier___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Decorator_UniqueIdentifier___c*, "<>9", ::Oculus::Interaction::Decorator_UniqueIdentifier___c*>();
}
inline void Oculus::Interaction::Decorator_UniqueIdentifier___c::setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(std::forward<::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*>(value));
}
inline ::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>* Oculus::Interaction::Decorator_UniqueIdentifier___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Decorator_UniqueIdentifier___c*>();
}
inline void Oculus::Interaction::Decorator_UniqueIdentifier___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UniqueIdentifier_Decorator* Oculus::Interaction::Decorator_UniqueIdentifier___c::_GetFromContext_b__1_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UniqueIdentifier_Decorator*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Decorator_UniqueIdentifier___c* Oculus::Interaction::Decorator_UniqueIdentifier___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Decorator_UniqueIdentifier___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Decorator_UniqueIdentifier___c::Decorator_UniqueIdentifier___c()   {
}
