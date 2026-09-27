#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntDebugHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntDebugHelper_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntDebugHelper_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntHandFollower_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5637560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x563762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.UpdatePropsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::UpdatePropsText)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x56376c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"UpdatePropsText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.GetCurrentPropInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::GetCurrentPropInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56379d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"GetCurrentPropInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.GetSelectedPropID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PropHuntDebugHelper::*)(int32_t)>(&::GlobalNamespace::PropHuntDebugHelper::GetSelectedPropID)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5637964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"GetSelectedPropID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.PrevProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::PrevProp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56379f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"PrevProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.NextProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::NextProp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5637a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"NextProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.SendForcePropHandRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)(::StringW)>(&::GlobalNamespace::PropHuntDebugHelper::SendForcePropHandRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5637a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"SendForcePropHandRPC", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper.ToggleRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::ToggleRound)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5637a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"ToggleRound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper::*)()>(&::GlobalNamespace::PropHuntDebugHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5637a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__propHuntManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propHuntManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__propHuntManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propHuntManager;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__propHuntManager(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propHuntManager = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower>& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__localPropHuntHandFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPropHuntHandFollower;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower> const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__localPropHuntHandFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPropHuntHandFollower;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__localPropHuntHandFollower(::UnityW<::GlobalNamespace::PropHuntHandFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPropHuntHandFollower = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__propsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propsText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__propsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propsText;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__propsText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propsText = value;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__allCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmetics;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__allCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allCosmetics;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__allCosmetics(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allCosmetics = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__cachedAllPropIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedAllPropIDs;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__cachedAllPropIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedAllPropIDs;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__cachedAllPropIDs(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedAllPropIDs = value;
}
constexpr int32_t& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__selectedPropIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPropIndex;
}
constexpr int32_t const& GlobalNamespace::PropHuntDebugHelper::__cordl_internal_get__selectedPropIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPropIndex;
}
constexpr void GlobalNamespace::PropHuntDebugHelper::__cordl_internal_set__selectedPropIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedPropIndex = value;
}
inline void GlobalNamespace::PropHuntDebugHelper::setStaticF_instance(::UnityW<::GlobalNamespace::PropHuntDebugHelper>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PropHuntDebugHelper>, "instance", ::GlobalNamespace::PropHuntDebugHelper*>(std::forward<::UnityW<::GlobalNamespace::PropHuntDebugHelper>>(value));
}
inline ::UnityW<::GlobalNamespace::PropHuntDebugHelper> GlobalNamespace::PropHuntDebugHelper::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PropHuntDebugHelper>, "instance", ::GlobalNamespace::PropHuntDebugHelper*>();
}
inline void GlobalNamespace::PropHuntDebugHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PropHuntDebugHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntDebugHelper::UpdatePropsText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"UpdatePropsText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PropHuntDebugHelper::GetCurrentPropInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"GetCurrentPropInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PropHuntDebugHelper::GetSelectedPropID(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"GetSelectedPropID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void GlobalNamespace::PropHuntDebugHelper::PrevProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"PrevProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntDebugHelper::NextProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"NextProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntDebugHelper::SendForcePropHandRPC(::StringW  newPropId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"SendForcePropHandRPC", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPropId);
}
inline void GlobalNamespace::PropHuntDebugHelper::ToggleRound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {"ToggleRound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntDebugHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntDebugHelper* GlobalNamespace::PropHuntDebugHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntDebugHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntDebugHelper::PropHuntDebugHelper()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)(int32_t)>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5637698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)()>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5637aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)()>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5637aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)()>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)()>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5637d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntDebugHelper__Start_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PropHuntDebugHelper__Start_d__8::*)()>(&::GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntDebugHelper>& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntDebugHelper> const& GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PropHuntDebugHelper__Start_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PropHuntDebugHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::PropHuntDebugHelper__Start_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PropHuntDebugHelper__Start_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PropHuntDebugHelper__Start_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PropHuntDebugHelper__Start_d__8* GlobalNamespace::PropHuntDebugHelper__Start_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntDebugHelper__Start_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PropHuntDebugHelper__Start_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PropHuntDebugHelper__Start_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PropHuntDebugHelper__Start_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PropHuntDebugHelper__Start_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PropHuntDebugHelper__Start_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PropHuntDebugHelper__Start_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntDebugHelper__Start_d__8::PropHuntDebugHelper__Start_d__8()   {
}
