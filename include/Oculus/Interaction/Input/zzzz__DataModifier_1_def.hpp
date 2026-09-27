#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataModifier_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataModifier_1)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
template<typename TData>
class DataModifier_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::DataModifier_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::DataModifier_1, "Oculus.Interaction.Input", "DataModifier`1");
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.DataModifier`1<TData>
class CORDL_TYPE DataModifier_1 : public ::Oculus::Interaction::Input::DataSource_1<TData> {
public:
// Declarations
 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_DataAsset)) TData  DataAsset;

 __declspec(property(get=get_ModifyDataFromSource)) ::Oculus::Interaction::Input::IDataSource_1<TData>*  ModifyDataFromSource;

/// @brief Field <InvalidAsset>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__InvalidAsset_k__BackingField, put=setStaticF__InvalidAsset_k__BackingField)) TData  _InvalidAsset_k__BackingField;

/// @brief Field _applyModifier, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyModifier, put=__cordl_internal_set__applyModifier)) bool  _applyModifier;

/// @brief Field _currentDataAsset, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDataAsset, put=__cordl_internal_set__currentDataAsset)) TData  _currentDataAsset;

/// @brief Field _iModifyDataFromSourceMono, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__iModifyDataFromSourceMono, put=__cordl_internal_set__iModifyDataFromSourceMono)) ::UnityW<::UnityEngine::Object>  _iModifyDataFromSourceMono;

/// @brief Field _modifyDataFromSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__modifyDataFromSource, put=__cordl_internal_set__modifyDataFromSource)) ::Oculus::Interaction::Input::IDataSource_1<TData>*  _modifyDataFromSource;

/// @brief Field _thisDataAsset, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__thisDataAsset, put=__cordl_internal_set__thisDataAsset)) TData  _thisDataAsset;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(TData  data) ;

/// @brief Method InjectAllDataModifier, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectAllDataModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource, bool  applyModifier) ;

/// @brief Method InjectApplyModifier, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectApplyModifier(bool  applyModifier) ;

/// @brief Method InjectModifyDataFromSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectModifyDataFromSource(::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource) ;

static inline ::Oculus::Interaction::Input::DataModifier_1<TData>* New_ctor() ;

/// @brief Method ResetSources, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResetSources(::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateData() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Start_b__17_0() ;

constexpr bool const& __cordl_internal_get__applyModifier() const;

constexpr bool& __cordl_internal_get__applyModifier() ;

constexpr TData const& __cordl_internal_get__currentDataAsset() const;

constexpr TData& __cordl_internal_get__currentDataAsset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__iModifyDataFromSourceMono() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__iModifyDataFromSourceMono() ;

constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>* const& __cordl_internal_get__modifyDataFromSource() const;

constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>*& __cordl_internal_get__modifyDataFromSource() ;

constexpr TData const& __cordl_internal_get__thisDataAsset() const;

constexpr TData& __cordl_internal_get__thisDataAsset() ;

constexpr void __cordl_internal_set__applyModifier(bool  value) ;

constexpr void __cordl_internal_set__currentDataAsset(TData  value) ;

constexpr void __cordl_internal_set__iModifyDataFromSourceMono(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__modifyDataFromSource(::Oculus::Interaction::Input::IDataSource_1<TData>*  value) ;

constexpr void __cordl_internal_set__thisDataAsset(TData  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline TData getStaticF__InvalidAsset_k__BackingField() ;

/// @brief Method get_CurrentDataVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CurrentDataVersion() ;

/// @brief Method get_DataAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TData get_DataAsset() ;

/// [CompilerGenerated]
/// @brief Method get_InvalidAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TData get_InvalidAsset() ;

/// @brief Method get_ModifyDataFromSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::IDataSource_1<TData>* get_ModifyDataFromSource() ;

static inline void setStaticF__InvalidAsset_k__BackingField(TData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataModifier_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataModifier_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataModifier_1(DataModifier_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataModifier_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataModifier_1(DataModifier_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16465};

/// [Header("Data Modifier")]
/// [SerializeField]
/// [Interface("_modifyDataFromSource")]
/// @brief Field _iModifyDataFromSourceMono, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____iModifyDataFromSourceMono;

/// @brief Field _modifyDataFromSource, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IDataSource_1<TData>*  ____modifyDataFromSource;

/// [SerializeField]
/// [Tooltip("If this is false, then this modifier will simply pass through data without performing any modification. This saves on memory and computation")]
/// @brief Field _applyModifier, offset: 0x58, size: 0x1, def value: None
 bool  ____applyModifier;

/// @brief Field _thisDataAsset, offset: 0x60, size: 0x8, def value: None
 TData  ____thisDataAsset;

/// @brief Field _currentDataAsset, offset: 0x68, size: 0x8, def value: None
 TData  ____currentDataAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
