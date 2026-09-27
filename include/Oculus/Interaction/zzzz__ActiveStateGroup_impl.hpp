#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGroup.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_ActiveStateGroupLogicOperator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_ActiveStateGroupLogicOperator_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)()>(&::Oculus::Interaction::ActiveStateGroup::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa409238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)()>(&::Oculus::Interaction::ActiveStateGroup::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ActiveStateGroup::*)()>(&::Oculus::Interaction::ActiveStateGroup::get_Active)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xa409350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.InjectAllActiveStateGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*)>(&::Oculus::Interaction::ActiveStateGroup::InjectAllActiveStateGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectAllActiveStateGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.InjectActiveStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*)>(&::Oculus::Interaction::ActiveStateGroup::InjectActiveStates)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa409790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectActiveStates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup.InjectOptionalLogicOperator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator)>(&::Oculus::Interaction::ActiveStateGroup::InjectOptionalLogicOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4098b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectOptionalLogicOperator", {}, {::i2c::type_of<::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup::*)()>(&::Oculus::Interaction::ActiveStateGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4098bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get__activeStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get__activeStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeStates;
}
constexpr void Oculus::Interaction::ActiveStateGroup::__cordl_internal_set__activeStates(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeStates = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get_ActiveStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStates;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>* const& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get_ActiveStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStates;
}
constexpr void Oculus::Interaction::ActiveStateGroup::__cordl_internal_set_ActiveStates(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveStates = value;
}
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get__logicOperator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicOperator;
}
constexpr ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator const& Oculus::Interaction::ActiveStateGroup::__cordl_internal_get__logicOperator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicOperator;
}
constexpr void Oculus::Interaction::ActiveStateGroup::__cordl_internal_set__logicOperator(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logicOperator = value;
}
inline void Oculus::Interaction::ActiveStateGroup::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGroup::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::ActiveStateGroup::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateGroup::InjectAllActiveStateGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  activeStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectAllActiveStateGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeStates);
}
inline void Oculus::Interaction::ActiveStateGroup::InjectActiveStates(::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*  activeStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectActiveStates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IActiveState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeStates);
}
inline void Oculus::Interaction::ActiveStateGroup::InjectOptionalLogicOperator(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator  logicOperator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {"InjectOptionalLogicOperator", {}, {::i2c::type_of<::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logicOperator);
}
inline void Oculus::Interaction::ActiveStateGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateGroup* Oculus::Interaction::ActiveStateGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateGroup*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::ActiveStateGroup::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateGroup::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateGroup::ActiveStateGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup___c::*)()>(&::Oculus::Interaction::ActiveStateGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4099ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup___c._Awake_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::ActiveStateGroup___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::ActiveStateGroup___c::_Awake_b__4_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4099f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {"<Awake>b__4_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup___c._InjectActiveStates_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::ActiveStateGroup___c::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateGroup___c::_InjectActiveStates_b__11_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa409a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {"<InjectActiveStates>b__11_0", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ActiveStateGroup___c::setStaticF___9(::Oculus::Interaction::ActiveStateGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ActiveStateGroup___c*, "<>9", ::Oculus::Interaction::ActiveStateGroup___c*>(std::forward<::Oculus::Interaction::ActiveStateGroup___c*>(value));
}
inline ::Oculus::Interaction::ActiveStateGroup___c* Oculus::Interaction::ActiveStateGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ActiveStateGroup___c*, "<>9", ::Oculus::Interaction::ActiveStateGroup___c*>();
}
inline void Oculus::Interaction::ActiveStateGroup___c::setStaticF___9__4_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*, "<>9__4_0", ::Oculus::Interaction::ActiveStateGroup___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>* Oculus::Interaction::ActiveStateGroup___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IActiveState*>*, "<>9__4_0", ::Oculus::Interaction::ActiveStateGroup___c*>();
}
inline void Oculus::Interaction::ActiveStateGroup___c::setStaticF___9__11_0(::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*, "<>9__11_0", ::Oculus::Interaction::ActiveStateGroup___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::ActiveStateGroup___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IActiveState*,::UnityW<::UnityEngine::Object>>*, "<>9__11_0", ::Oculus::Interaction::ActiveStateGroup___c*>();
}
inline void Oculus::Interaction::ActiveStateGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateGroup___c::_Awake_b__4_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {"<Awake>b__4_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method, mono);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::ActiveStateGroup___c::_InjectActiveStates_b__11_0(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup___c*>(),
                        {"<InjectActiveStates>b__11_0", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, activeState);
}
inline ::Oculus::Interaction::ActiveStateGroup___c* Oculus::Interaction::ActiveStateGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateGroup___c::ActiveStateGroup___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup_DebugModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::ActiveStateGroup_DebugModel::*)(::Oculus::Interaction::ActiveStateGroup*)>(&::Oculus::Interaction::ActiveStateGroup_DebugModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4098c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup_DebugModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup_DebugModel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateGroup_DebugModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateGroup_DebugModel::*)()>(&::Oculus::Interaction::ActiveStateGroup_DebugModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa40993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::ActiveStateGroup_DebugModel::GetChildrenAsync(::Oculus::Interaction::ActiveStateGroup*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateGroup_DebugModel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, instance);
}
inline void Oculus::Interaction::ActiveStateGroup_DebugModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateGroup_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateGroup_DebugModel* Oculus::Interaction::ActiveStateGroup_DebugModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateGroup_DebugModel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateGroup_DebugModel::ActiveStateGroup_DebugModel()   {
}
