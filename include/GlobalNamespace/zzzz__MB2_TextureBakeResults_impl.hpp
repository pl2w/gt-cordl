#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_TextureBakeResults.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterial_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.get_VERSION
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::MB2_TextureBakeResults::get_VERSION)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d73284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"get_VERSION", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults::*)()>(&::GlobalNamespace::MB2_TextureBakeResults::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d7328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults::*)()>(&::GlobalNamespace::MB2_TextureBakeResults::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d732ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.NumResultMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB2_TextureBakeResults::*)()>(&::GlobalNamespace::MB2_TextureBakeResults::NumResultMaterials)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d73318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"NumResultMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.GetCombinedMaterialForSubmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MB2_TextureBakeResults::*)(int32_t)>(&::GlobalNamespace::MB2_TextureBakeResults::GetCombinedMaterialForSubmesh)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d73344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetCombinedMaterialForSubmesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.FindRuntimeMaterialsFromAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB2_TextureBakeResults::*)(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*)>(&::GlobalNamespace::MB2_TextureBakeResults::FindRuntimeMaterialsFromAddresses)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d73390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.GetConsiderMeshUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB2_TextureBakeResults::*)(int32_t, ::UnityEngine::Material*)>(&::GlobalNamespace::MB2_TextureBakeResults::GetConsiderMeshUVs)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9d73440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetConsiderMeshUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.GetSourceMaterialsUsedByResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::GlobalNamespace::MB2_TextureBakeResults::*)(int32_t)>(&::GlobalNamespace::MB2_TextureBakeResults::GetSourceMaterialsUsedByResultMaterial)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9d735a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetSourceMaterialsUsedByResultMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.CreateForMaterialsOnRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (*)(::ArrayW<::UnityEngine::GameObject*>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::GlobalNamespace::MB2_TextureBakeResults::CreateForMaterialsOnRenderer)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x9d737e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"CreateForMaterialsOnRenderer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.DoAnyResultMatsUseConsiderMeshUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB2_TextureBakeResults::*)()>(&::GlobalNamespace::MB2_TextureBakeResults::DoAnyResultMatsUseConsiderMeshUVs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d73f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"DoAnyResultMatsUseConsiderMeshUVs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.ContainsMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB2_TextureBakeResults::*)(::UnityEngine::Material*)>(&::GlobalNamespace::MB2_TextureBakeResults::ContainsMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d74098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"ContainsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MB2_TextureBakeResults::*)()>(&::GlobalNamespace::MB2_TextureBakeResults::GetDescription)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x9d74158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.UpgradeToCurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB2_TextureBakeResults::UpgradeToCurrentVersion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d74578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"UpgradeToCurrentVersion", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults.IsMeshAndMaterialRectEnclosedByAtlasRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB2_TextureBakeResults::IsMeshAndMaterialRectEnclosedByAtlasRect)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x9d745e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"IsMeshAndMaterialRectEnclosedByAtlasRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultType;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultType;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultType = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_materialsAndUVRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialsAndUVRects;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_materialsAndUVRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialsAndUVRects;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_materialsAndUVRects(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialsAndUVRects = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterials;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*> const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterials;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_resultMaterials(::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterials = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultMaterialsTexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialsTexArray;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*> const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_resultMaterialsTexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialsTexArray;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_resultMaterialsTexArray(::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialsTexArray = value;
}
constexpr bool& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_doMultiMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMultiMaterial;
}
constexpr bool const& GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_get_doMultiMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMultiMaterial;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults::__cordl_internal_set_doMultiMaterial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doMultiMaterial = value;
}
inline int32_t GlobalNamespace::MB2_TextureBakeResults::get_VERSION()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"get_VERSION", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MB2_TextureBakeResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_TextureBakeResults::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MB2_TextureBakeResults::NumResultMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"NumResultMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MB2_TextureBakeResults::GetCombinedMaterialForSubmesh(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetCombinedMaterialForSubmesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, idx);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB2_TextureBakeResults::FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, isComplete);
}
inline bool GlobalNamespace::MB2_TextureBakeResults::GetConsiderMeshUVs(int32_t  idxInSrcMats, ::UnityEngine::Material*  srcMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetConsiderMeshUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idxInSrcMats, srcMaterial);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::MB2_TextureBakeResults::GetSourceMaterialsUsedByResultMaterial(int32_t  resultMatIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetSourceMaterialsUsedByResultMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method, resultMatIdx);
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> GlobalNamespace::MB2_TextureBakeResults::CreateForMaterialsOnRenderer(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  matsOnTargetRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"CreateForMaterialsOnRenderer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(nullptr, ___internal_method, gos, matsOnTargetRenderer);
}
inline bool GlobalNamespace::MB2_TextureBakeResults::DoAnyResultMatsUseConsiderMeshUVs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"DoAnyResultMatsUseConsiderMeshUVs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MB2_TextureBakeResults::ContainsMaterial(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"ContainsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::StringW GlobalNamespace::MB2_TextureBakeResults::GetDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"GetDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_TextureBakeResults::UpgradeToCurrentVersion(::GlobalNamespace::MB2_TextureBakeResults*  tbr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"UpgradeToCurrentVersion", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbr);
}
inline bool GlobalNamespace::MB2_TextureBakeResults::IsMeshAndMaterialRectEnclosedByAtlasRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  tilingTreatment, ::UnityEngine::Rect  uvR, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatinRect, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults*>(),
                        {"IsMeshAndMaterialRectEnclosedByAtlasRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tilingTreatment, uvR, sourceMaterialTiling, samplingEncapsulatinRect, logLevel);
}
inline ::GlobalNamespace::MB2_TextureBakeResults* GlobalNamespace::MB2_TextureBakeResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB2_TextureBakeResults*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB2_TextureBakeResults::MB2_TextureBakeResults()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)(int32_t)>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d73418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)()>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d74970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)()>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d74974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)()>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d74a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)()>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d74a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::*)()>(&::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d74ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::__cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
inline void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14::MB2_TextureBakeResults__FindRuntimeMaterialsFromAddresses_d__14()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::*)()>(&::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d74968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr bool const& GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::__cordl_internal_set_isComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
inline void GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult::MB2_TextureBakeResults_CoroutineResult()   {
}
