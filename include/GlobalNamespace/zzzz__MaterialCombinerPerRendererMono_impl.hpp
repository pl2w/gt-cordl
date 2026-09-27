#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialCombinerPerRendererMono.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialCombinerPerRendererMono_def.hpp"
#include "GlobalNamespace/zzzz__MaterialCombinerPerRendererInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialCombinerPerRendererMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialCombinerPerRendererMono::*)()>(&::GlobalNamespace::MaterialCombinerPerRendererMono::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5697fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialCombinerPerRendererMono.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialCombinerPerRendererMono::*)(::UnityEngine::Renderer*, int32_t, int32_t, ::UnityEngine::Color, ::UnityEngine::Material*)>(&::GlobalNamespace::MaterialCombinerPerRendererMono::AddEntry)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5697fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"AddEntry", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialCombinerPerRendererMono.TryGetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MaterialCombinerPerRendererMono::*)(::UnityEngine::Renderer*, int32_t, ::by_ref<::GlobalNamespace::MaterialCombinerPerRendererInfo>)>(&::GlobalNamespace::MaterialCombinerPerRendererMono::TryGetData)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5698118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"TryGetData", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MaterialCombinerPerRendererInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialCombinerPerRendererMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialCombinerPerRendererMono::*)()>(&::GlobalNamespace::MaterialCombinerPerRendererMono::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5698368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*& GlobalNamespace::MaterialCombinerPerRendererMono::__cordl_internal_get_slotData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>* const& GlobalNamespace::MaterialCombinerPerRendererMono::__cordl_internal_get_slotData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotData;
}
constexpr void GlobalNamespace::MaterialCombinerPerRendererMono::__cordl_internal_set_slotData(::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotData = value;
}
inline void GlobalNamespace::MaterialCombinerPerRendererMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialCombinerPerRendererMono::AddEntry(::UnityEngine::Renderer*  r, int32_t  slot, int32_t  sliceIndex, ::UnityEngine::Color  baseColor, ::UnityEngine::Material*  oldMat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"AddEntry", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, slot, sliceIndex, baseColor, oldMat);
}
inline bool GlobalNamespace::MaterialCombinerPerRendererMono::TryGetData(::UnityEngine::Renderer*  r, int32_t  slot, ::by_ref<::GlobalNamespace::MaterialCombinerPerRendererInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {"TryGetData", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MaterialCombinerPerRendererInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r, slot, data);
}
inline void GlobalNamespace::MaterialCombinerPerRendererMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialCombinerPerRendererMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialCombinerPerRendererMono* GlobalNamespace::MaterialCombinerPerRendererMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialCombinerPerRendererMono*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialCombinerPerRendererMono::MaterialCombinerPerRendererMono()   {
}
