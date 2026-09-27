#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvasManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvasManager_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvasManager_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVROverlayCanvasManager> (*)()>(&::GlobalNamespace::OVROverlayCanvasManager::get_Instance)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa6001c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.AddCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVROverlayCanvas*)>(&::GlobalNamespace::OVROverlayCanvasManager::AddCanvas)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa601968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"AddCanvas", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.RemoveCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVROverlayCanvas*)>(&::GlobalNamespace::OVROverlayCanvasManager::RemoveCanvas)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa601ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"RemoveCanvas", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.IsCanvasPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvasManager::*)(::GlobalNamespace::OVROverlayCanvas*)>(&::GlobalNamespace::OVROverlayCanvasManager::IsCanvasPriority)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa600314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"IsCanvasPriority", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.get_Canvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* (::GlobalNamespace::OVROverlayCanvasManager::*)()>(&::GlobalNamespace::OVROverlayCanvasManager::get_Canvases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa60477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"get_Canvases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvasManager::*)()>(&::GlobalNamespace::OVROverlayCanvasManager::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa604784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvasManager::*)()>(&::GlobalNamespace::OVROverlayCanvasManager::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa604814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvasManager::*)()>(&::GlobalNamespace::OVROverlayCanvasManager::OnDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa604918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvasManager::*)()>(&::GlobalNamespace::OVROverlayCanvasManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6049cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*& GlobalNamespace::OVROverlayCanvasManager::__cordl_internal_get__canvases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvases;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* const& GlobalNamespace::OVROverlayCanvasManager::__cordl_internal_get__canvases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvases;
}
constexpr void GlobalNamespace::OVROverlayCanvasManager::__cordl_internal_set__canvases(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvases = value;
}
inline void GlobalNamespace::OVROverlayCanvasManager::setStaticF__instance(::UnityW<::GlobalNamespace::OVROverlayCanvasManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVROverlayCanvasManager>, "_instance", ::GlobalNamespace::OVROverlayCanvasManager*>(std::forward<::UnityW<::GlobalNamespace::OVROverlayCanvasManager>>(value));
}
inline ::UnityW<::GlobalNamespace::OVROverlayCanvasManager> GlobalNamespace::OVROverlayCanvasManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVROverlayCanvasManager>, "_instance", ::GlobalNamespace::OVROverlayCanvasManager*>();
}
inline ::UnityW<::GlobalNamespace::OVROverlayCanvasManager> GlobalNamespace::OVROverlayCanvasManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVROverlayCanvasManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvasManager::AddCanvas(::GlobalNamespace::OVROverlayCanvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"AddCanvas", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canvas);
}
inline void GlobalNamespace::OVROverlayCanvasManager::RemoveCanvas(::GlobalNamespace::OVROverlayCanvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"RemoveCanvas", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canvas);
}
inline bool GlobalNamespace::OVROverlayCanvasManager::IsCanvasPriority(::GlobalNamespace::OVROverlayCanvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"IsCanvasPriority", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, canvas);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* GlobalNamespace::OVROverlayCanvasManager::get_Canvases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"get_Canvases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvasManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvasManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvasManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvasManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayCanvasManager* GlobalNamespace::OVROverlayCanvasManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvasManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvasManager::OVROverlayCanvasManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvasManager___c::*)()>(&::GlobalNamespace::OVROverlayCanvasManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa604abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvasManager___c._Update_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVROverlayCanvasManager___c::*)(::GlobalNamespace::OVROverlayCanvas*, ::GlobalNamespace::OVROverlayCanvas*)>(&::GlobalNamespace::OVROverlayCanvasManager___c::_Update_b__10_0)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa604ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager___c*>(),
                        {"<Update>b__10_0", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>(), ::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVROverlayCanvasManager___c::setStaticF___9(::GlobalNamespace::OVROverlayCanvasManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVROverlayCanvasManager___c*, "<>9", ::GlobalNamespace::OVROverlayCanvasManager___c*>(std::forward<::GlobalNamespace::OVROverlayCanvasManager___c*>(value));
}
inline ::GlobalNamespace::OVROverlayCanvasManager___c* GlobalNamespace::OVROverlayCanvasManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVROverlayCanvasManager___c*, "<>9", ::GlobalNamespace::OVROverlayCanvasManager___c*>();
}
inline void GlobalNamespace::OVROverlayCanvasManager___c::setStaticF___9__10_0(::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*, "<>9__10_0", ::GlobalNamespace::OVROverlayCanvasManager___c*>(std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* GlobalNamespace::OVROverlayCanvasManager___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*, "<>9__10_0", ::GlobalNamespace::OVROverlayCanvasManager___c*>();
}
inline void GlobalNamespace::OVROverlayCanvasManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVROverlayCanvasManager___c::_Update_b__10_0(::GlobalNamespace::OVROverlayCanvas*  a, ::GlobalNamespace::OVROverlayCanvas*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvasManager___c*>(),
                        {"<Update>b__10_0", {}, {::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>(), ::i2c::type_of<::GlobalNamespace::OVROverlayCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::OVROverlayCanvasManager___c* GlobalNamespace::OVROverlayCanvasManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvasManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvasManager___c::OVROverlayCanvasManager___c()   {
}
