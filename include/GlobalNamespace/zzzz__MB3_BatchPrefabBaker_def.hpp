#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_BatchPrefabBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_BatchPrefabBaker)
namespace GlobalNamespace {
class MB3_BatchPrefabBaker_MB3_PrefabBakerRow;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_BatchPrefabBaker;
}
namespace GlobalNamespace {
class MB3_BatchPrefabBaker_MB3_PrefabBakerRow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_BatchPrefabBaker*);
MARK_REF_T(::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_BatchPrefabBaker*, "", "MB3_BatchPrefabBaker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*, "", "MB3_BatchPrefabBaker/MB3_PrefabBakerRow");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, MB3_BatchPrefabBaker::MB3_PrefabBakerRow, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_BatchPrefabBaker
class CORDL_TYPE MB3_BatchPrefabBaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MB3_PrefabBakerRow = ::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow;

/// @brief Field LOG_LEVEL, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field outputPrefabFolder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPrefabFolder, put=__cordl_internal_set_outputPrefabFolder)) ::StringW  outputPrefabFolder;

/// @brief Field prefabRows, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabRows, put=__cordl_internal_set_prefabRows)) ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>  prefabRows;

/// [ContextMenu("Create Instances For Prefab Rows")]
/// @brief Method CreateSourceAndResultPrefabInstances, addr 0x9d75460, size 0x68, virtual false, abstract: false, final false
inline void CreateSourceAndResultPrefabInstances() ;

static inline ::GlobalNamespace::MB3_BatchPrefabBaker* New_ctor() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr ::StringW const& __cordl_internal_get_outputPrefabFolder() const;

constexpr ::StringW& __cordl_internal_get_outputPrefabFolder() ;

constexpr ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*> const& __cordl_internal_get_prefabRows() const;

constexpr ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>& __cordl_internal_get_prefabRows() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set_outputPrefabFolder(::StringW  value) ;

constexpr void __cordl_internal_set_prefabRows(::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>  value) ;

/// @brief Method .ctor, addr 0x9d754c8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_BatchPrefabBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_BatchPrefabBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_BatchPrefabBaker(MB3_BatchPrefabBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_BatchPrefabBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_BatchPrefabBaker(MB3_BatchPrefabBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22566};

/// @brief Field LOG_LEVEL, offset: 0x20, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// [NonReorderable]
/// @brief Field prefabRows, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>  ___prefabRows;

/// @brief Field outputPrefabFolder, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___outputPrefabFolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_BatchPrefabBaker, ___LOG_LEVEL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BatchPrefabBaker, ___prefabRows) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BatchPrefabBaker, ___outputPrefabFolder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_BatchPrefabBaker) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_BatchPrefabBaker/MB3_PrefabBakerRow
class CORDL_TYPE MB3_BatchPrefabBaker_MB3_PrefabBakerRow : public ::System::Object {
public:
// Declarations
/// @brief Field resultPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPrefab, put=__cordl_internal_set_resultPrefab)) ::UnityW<::UnityEngine::GameObject>  resultPrefab;

/// @brief Field sourcePrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourcePrefab, put=__cordl_internal_set_sourcePrefab)) ::UnityW<::UnityEngine::GameObject>  sourcePrefab;

static inline ::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_resultPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_resultPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sourcePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sourcePrefab() ;

constexpr void __cordl_internal_set_resultPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sourcePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d75560, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_BatchPrefabBaker_MB3_PrefabBakerRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_BatchPrefabBaker_MB3_PrefabBakerRow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_BatchPrefabBaker_MB3_PrefabBakerRow(MB3_BatchPrefabBaker_MB3_PrefabBakerRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_BatchPrefabBaker_MB3_PrefabBakerRow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_BatchPrefabBaker_MB3_PrefabBakerRow(MB3_BatchPrefabBaker_MB3_PrefabBakerRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22565};

/// @brief Field sourcePrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sourcePrefab;

/// @brief Field resultPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___resultPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow, ___sourcePrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow, ___resultPrefab) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
