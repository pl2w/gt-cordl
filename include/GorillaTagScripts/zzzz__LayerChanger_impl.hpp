#pragma once
// IWYU pragma private; include "GorillaTagScripts/LayerChanger.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__LayerChanger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger.InitializeLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)(::UnityEngine::Transform*)>(&::GorillaTagScripts::LayerChanger::InitializeLayers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bcb678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"InitializeLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger.StoreOriginalLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)(::UnityEngine::Transform*)>(&::GorillaTagScripts::LayerChanger::StoreOriginalLayers)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5bcb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"StoreOriginalLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger.ChangeLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)(::UnityEngine::Transform*, ::StringW)>(&::GorillaTagScripts::LayerChanger::ChangeLayer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bcb9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"ChangeLayer", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger.ChangeLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)(::UnityEngine::Transform*, int32_t)>(&::GorillaTagScripts::LayerChanger::ChangeLayers)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5bcba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"ChangeLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger.RestoreOriginalLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)()>(&::GorillaTagScripts::LayerChanger::RestoreOriginalLayers)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bcbe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"RestoreOriginalLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LayerChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LayerChanger::*)()>(&::GorillaTagScripts::LayerChanger::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bcbfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GorillaTagScripts::LayerChanger::__cordl_internal_get_restrictedLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictedLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaTagScripts::LayerChanger::__cordl_internal_get_restrictedLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictedLayers;
}
constexpr void GorillaTagScripts::LayerChanger::__cordl_internal_set_restrictedLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictedLayers = value;
}
constexpr bool& GorillaTagScripts::LayerChanger::__cordl_internal_get_includeChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeChildren;
}
constexpr bool const& GorillaTagScripts::LayerChanger::__cordl_internal_get_includeChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeChildren;
}
constexpr void GorillaTagScripts::LayerChanger::__cordl_internal_set_includeChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeChildren = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*& GorillaTagScripts::LayerChanger::__cordl_internal_get_originalLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalLayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>* const& GorillaTagScripts::LayerChanger::__cordl_internal_get_originalLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalLayers;
}
constexpr void GorillaTagScripts::LayerChanger::__cordl_internal_set_originalLayers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalLayers = value;
}
constexpr bool& GorillaTagScripts::LayerChanger::__cordl_internal_get_layersStored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layersStored;
}
constexpr bool const& GorillaTagScripts::LayerChanger::__cordl_internal_get_layersStored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layersStored;
}
constexpr void GorillaTagScripts::LayerChanger::__cordl_internal_set_layersStored(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layersStored = value;
}
inline void GorillaTagScripts::LayerChanger::InitializeLayers(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"InitializeLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void GorillaTagScripts::LayerChanger::StoreOriginalLayers(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"StoreOriginalLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void GorillaTagScripts::LayerChanger::ChangeLayer(::UnityEngine::Transform*  parent, ::StringW  newLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"ChangeLayer", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, newLayer);
}
inline void GorillaTagScripts::LayerChanger::ChangeLayers(::UnityEngine::Transform*  parent, int32_t  newLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"ChangeLayers", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, newLayer);
}
inline void GorillaTagScripts::LayerChanger::RestoreOriginalLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {"RestoreOriginalLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LayerChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LayerChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::LayerChanger* GorillaTagScripts::LayerChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::LayerChanger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::LayerChanger::LayerChanger()   {
}
