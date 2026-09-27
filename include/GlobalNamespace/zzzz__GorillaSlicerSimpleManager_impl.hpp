#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSlicerSimpleManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSlicerSimpleManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSlicerSimpleManager_UpdateStep_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSlicerSimpleManager::*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59239dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::CreateManager)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5923b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaSlicerSimpleManager*)>(&::GlobalNamespace::GorillaSlicerSimpleManager::SetInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5923a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.RegisterSliceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IGorillaSliceableSimple*)>(&::GlobalNamespace::GorillaSlicerSimpleManager::RegisterSliceable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"RegisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.RegisterSliceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IGorillaSliceableSimple*, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep)>(&::GlobalNamespace::GorillaSlicerSimpleManager::RegisterSliceable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5923cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"RegisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>(), ::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.UnregisterSliceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IGorillaSliceableSimple*)>(&::GlobalNamespace::GorillaSlicerSimpleManager::UnregisterSliceable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5923f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"UnregisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.UnregisterSliceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IGorillaSliceableSimple*, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep)>(&::GlobalNamespace::GorillaSlicerSimpleManager::UnregisterSliceable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5923f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"UnregisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>(), ::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSlicerSimpleManager::*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x59240e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSlicerSimpleManager::*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::Update)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5924474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSlicerSimpleManager::*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::LateUpdate)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x59247e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSlicerSimpleManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSlicerSimpleManager::*)()>(&::GlobalNamespace::GorillaSlicerSimpleManager::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5924b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_fixedUpdateSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedUpdateSlice;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_fixedUpdateSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedUpdateSlice;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_fixedUpdateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedUpdateSlice = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_updateSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSlice;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_updateSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSlice;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_updateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateSlice = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_lateUpdateSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateUpdateSlice;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_lateUpdateSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateUpdateSlice;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_lateUpdateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lateUpdateSlice = value;
}
constexpr int64_t& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_ticksPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticksPerFrame;
}
constexpr int64_t const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_ticksPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticksPerFrame;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_ticksPerFrame(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticksPerFrame = value;
}
constexpr int64_t& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_ticksThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticksThisFrame;
}
constexpr int64_t const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_ticksThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticksThisFrame;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_ticksThisFrame(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticksThisFrame = value;
}
constexpr int32_t& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_updateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_updateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIndex;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_updateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateIndex = value;
}
constexpr int32_t& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_startingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_startingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIndex;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_startingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingIndex = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_sW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sW;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_sW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sW;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_sW(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sW = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_lastRunTicks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRunTicks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>* const& GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_get_lastRunTicks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRunTicks;
}
constexpr void GlobalNamespace::GorillaSlicerSimpleManager::__cordl_internal_set_lastRunTicks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRunTicks = value;
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::setStaticF_instance(::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>, "instance", ::GlobalNamespace::GorillaSlicerSimpleManager*>(std::forward<::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager> GlobalNamespace::GorillaSlicerSimpleManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>, "instance", ::GlobalNamespace::GorillaSlicerSimpleManager*>();
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaSlicerSimpleManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaSlicerSimpleManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaSlicerSimpleManager*>();
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::SetInstance(::GlobalNamespace::GorillaSlicerSimpleManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::RegisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"RegisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gSS);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::RegisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"RegisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>(), ::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gSS, step);
}
inline bool GlobalNamespace::GorillaSlicerSimpleManager::UnregisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"UnregisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gSS);
}
inline bool GlobalNamespace::GorillaSlicerSimpleManager::UnregisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"UnregisterSliceable", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSliceableSimple*>(), ::i2c::type_of<::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gSS, step);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSlicerSimpleManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSlicerSimpleManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSlicerSimpleManager* GlobalNamespace::GorillaSlicerSimpleManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSlicerSimpleManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSlicerSimpleManager::GorillaSlicerSimpleManager()   {
}
