#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaText)
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaText;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaText*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaText*, "GorillaNetworking", "GorillaText");
// Dependencies System.Object, UnityEngine.Material
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaText
class CORDL_TYPE GorillaText : public ::System::Object {
public:
// Declarations
/// @brief Field currentMaterials, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMaterials, put=__cordl_internal_set_currentMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  currentMaterials;

/// @brief Field currentText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentText, put=__cordl_internal_set_currentText)) ::StringW  currentText;

/// @brief Field failedState, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_failedState, put=__cordl_internal_set_failedState)) bool  failedState;

/// @brief Field failureMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureMaterial, put=__cordl_internal_set_failureMaterial)) ::UnityW<::UnityEngine::Material>  failureMaterial;

/// @brief Field failureText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureText, put=__cordl_internal_set_failureText)) ::StringW  failureText;

/// @brief Field modified, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_modified, put=__cordl_internal_set_modified)) bool  modified;

/// @brief Field originalMaterials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMaterials, put=__cordl_internal_set_originalMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  originalMaterials;

/// @brief Field originalText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalText, put=__cordl_internal_set_originalText)) ::StringW  originalText;

/// @brief Field stringBuilder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringBuilder, put=__cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder*  stringBuilder;

/// @brief Field updateMaterialCallback, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateMaterialCallback, put=__cordl_internal_set_updateMaterialCallback)) ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  updateMaterialCallback;

/// @brief Field updateTextCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateTextCallback, put=__cordl_internal_set_updateTextCallback)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  updateTextCallback;

/// @brief Method Append, addr 0x5c86f58, size 0x24, virtual false, abstract: false, final false
inline void Append(::StringW  str) ;

/// @brief Method DisableFailedState, addr 0x5c87ca8, size 0xcc, virtual false, abstract: false, final false
inline void DisableFailedState() ;

/// @brief Method EnableFailedState, addr 0x5c87af4, size 0x1b4, virtual false, abstract: false, final false
inline void EnableFailedState(::StringW  failText) ;

/// @brief Method Initialize, addr 0x5c877d0, size 0x108, virtual false, abstract: false, final false
inline void Initialize(::ArrayW<::UnityEngine::Material*>  originalMaterials, ::UnityEngine::Material*  failureMaterial, ::UnityEngine::Events::UnityEvent_1<::StringW>*  callback, ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  materialCallback) ;

/// @brief Method InvokeIfUpdated, addr 0x5c87a44, size 0xb0, virtual false, abstract: false, final false
inline void InvokeIfUpdated() ;

static inline ::GorillaNetworking::GorillaText* New_ctor() ;

/// @brief Method Set, addr 0x5c86f10, size 0x48, virtual false, abstract: false, final false
inline void Set(::StringW  str) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_currentMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_currentMaterials() ;

constexpr ::StringW const& __cordl_internal_get_currentText() const;

constexpr ::StringW& __cordl_internal_get_currentText() ;

constexpr bool const& __cordl_internal_get_failedState() const;

constexpr bool& __cordl_internal_get_failedState() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_failureMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_failureMaterial() ;

constexpr ::StringW const& __cordl_internal_get_failureText() const;

constexpr ::StringW& __cordl_internal_get_failureText() ;

constexpr bool const& __cordl_internal_get_modified() const;

constexpr bool& __cordl_internal_get_modified() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_originalMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_originalMaterials() ;

constexpr ::StringW const& __cordl_internal_get_originalText() const;

constexpr ::StringW& __cordl_internal_get_originalText() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>* const& __cordl_internal_get_updateMaterialCallback() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*& __cordl_internal_get_updateMaterialCallback() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_updateTextCallback() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_updateTextCallback() ;

constexpr void __cordl_internal_set_currentMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_currentText(::StringW  value) ;

constexpr void __cordl_internal_set_failedState(bool  value) ;

constexpr void __cordl_internal_set_failureMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_failureText(::StringW  value) ;

constexpr void __cordl_internal_set_modified(bool  value) ;

constexpr void __cordl_internal_set_originalMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_originalText(::StringW  value) ;

constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_updateMaterialCallback(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  value) ;

constexpr void __cordl_internal_set_updateTextCallback(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5c87d74, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaText(GorillaText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaText(GorillaText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4337};

/// @brief Field failureText, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___failureText;

/// @brief Field currentText, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___currentText;

/// @brief Field originalText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___originalText;

/// @brief Field stringBuilder, offset: 0x28, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___stringBuilder;

/// @brief Field modified, offset: 0x30, size: 0x1, def value: None
 bool  ___modified;

/// @brief Field failedState, offset: 0x31, size: 0x1, def value: None
 bool  ___failedState;

/// @brief Field originalMaterials, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___originalMaterials;

/// @brief Field failureMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___failureMaterial;

/// @brief Field currentMaterials, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___currentMaterials;

/// @brief Field updateTextCallback, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___updateTextCallback;

/// @brief Field updateMaterialCallback, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityW<::UnityEngine::Material>>>*  ___updateMaterialCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaText, ___failureText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___currentText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___originalText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___stringBuilder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___modified) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___failedState) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___originalMaterials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___failureMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___currentMaterials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___updateTextCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaText, ___updateMaterialCallback) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaText) == 0x60, "Size mismatch!");

} // namespace end def GorillaNetworking
