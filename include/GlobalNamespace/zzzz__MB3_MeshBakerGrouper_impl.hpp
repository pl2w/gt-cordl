#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerGrouper.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSettingsData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettingsHolder_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.GetMeshBakerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings* (::GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&::GlobalNamespace::MB3_MeshBakerGrouper::GetMeshBakerSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d77e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GetMeshBakerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.GetMeshBakerSettingsAsSerializedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerGrouper::*)(::by_ref<::StringW>, ::by_ref<::UnityEngine::Object*>)>(&::GlobalNamespace::MB3_MeshBakerGrouper::GetMeshBakerSettingsAsSerializedProperty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d77ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GetMeshBakerSettingsAsSerializedProperty", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&::GlobalNamespace::MB3_MeshBakerGrouper::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d77f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.CreateGrouper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* (::GlobalNamespace::MB3_MeshBakerGrouper::*)(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType)>(&::GlobalNamespace::MB3_MeshBakerGrouper::CreateGrouper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9d78038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"CreateGrouper", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.DeleteAllChildMeshBakers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&::GlobalNamespace::MB3_MeshBakerGrouper::DeleteAllChildMeshBakers)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d7814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"DeleteAllChildMeshBakers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper.GenerateMeshBakers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* (::GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&::GlobalNamespace::MB3_MeshBakerGrouper::GenerateMeshBakers)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x9d78224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GenerateMeshBakers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerGrouper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&::GlobalNamespace::MB3_MeshBakerGrouper::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d78700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_grouper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grouper;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_grouper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grouper;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_grouper(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grouper = value;
}
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_clusterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterType;
}
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_clusterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterType;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_clusterType(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clusterType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_parentSceneObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSceneObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_parentSceneObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSceneObject;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_parentSceneObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentSceneObject = value;
}
constexpr ::DigitalOpus::MB::Core::GrouperData*& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::GrouperData* const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_data(::DigitalOpus::MB::Core::GrouperData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_sourceObjectBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceObjectBounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_sourceObjectBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceObjectBounds;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_sourceObjectBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceObjectBounds = value;
}
constexpr ::StringW& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_outputFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_outputFolder;
}
constexpr ::StringW const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_outputFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_outputFolder;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_prefabOptions_outputFolder(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabOptions_outputFolder = value;
}
constexpr bool& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_autoGeneratePrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_autoGeneratePrefabs;
}
constexpr bool const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_autoGeneratePrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_autoGeneratePrefabs;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_prefabOptions_autoGeneratePrefabs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabOptions_autoGeneratePrefabs = value;
}
constexpr bool& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_mergeOutputIntoSinglePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_mergeOutputIntoSinglePrefab;
}
constexpr bool const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_prefabOptions_mergeOutputIntoSinglePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabOptions_mergeOutputIntoSinglePrefab;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_prefabOptions_mergeOutputIntoSinglePrefab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabOptions_mergeOutputIntoSinglePrefab = value;
}
constexpr ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_meshBakerSettingsAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBakerSettingsAsset;
}
constexpr ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings> const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_meshBakerSettingsAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBakerSettingsAsset;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_meshBakerSettingsAsset(::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBakerSettingsAsset = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_meshBakerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBakerSettings;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* const& GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_get_meshBakerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBakerSettings;
}
constexpr void GlobalNamespace::MB3_MeshBakerGrouper::__cordl_internal_set_meshBakerSettings(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBakerSettings = value;
}
inline void GlobalNamespace::MB3_MeshBakerGrouper::setStaticF_WHITE_TRANSP(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "WHITE_TRANSP", ::GlobalNamespace::MB3_MeshBakerGrouper*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::MB3_MeshBakerGrouper::getStaticF_WHITE_TRANSP()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "WHITE_TRANSP", ::GlobalNamespace::MB3_MeshBakerGrouper*>();
}
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GlobalNamespace::MB3_MeshBakerGrouper::GetMeshBakerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GetMeshBakerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerGrouper::GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GetMeshBakerSettingsAsSerializedProperty", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, targetObj);
}
inline void GlobalNamespace::MB3_MeshBakerGrouper::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* GlobalNamespace::MB3_MeshBakerGrouper::CreateGrouper(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"CreateGrouper", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(this, ___internal_method, t);
}
inline void GlobalNamespace::MB3_MeshBakerGrouper::DeleteAllChildMeshBakers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"DeleteAllChildMeshBakers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* GlobalNamespace::MB3_MeshBakerGrouper::GenerateMeshBakers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {"GenerateMeshBakers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerGrouper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper* GlobalNamespace::MB3_MeshBakerGrouper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBakerGrouper*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr  GlobalNamespace::MB3_MeshBakerGrouper::operator ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* GlobalNamespace::MB3_MeshBakerGrouper::i___DigitalOpus__MB__Core__MB_IMeshBakerSettingsHolder() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper::MB3_MeshBakerGrouper()   {
}
