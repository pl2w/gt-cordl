#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyFileOperations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyFileOperations_Operation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyFileOperations)
namespace GlobalNamespace {
struct ModPropertyFileOperations_Operation;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyFileOperations;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyFileOperations");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyFileOperations::Operation, System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyFileOperations
class CORDL_TYPE ModPropertyFileOperations : public ::System::Object {
public:
// Declarations
using Operation = ::GlobalNamespace::ModPropertyFileOperations_Operation;

/// @brief Field _downloadSpeed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__downloadSpeed, put=__cordl_internal_set__downloadSpeed)) ::UnityW<::TMPro::TMP_Text>  _downloadSpeed;

/// @brief Field _invertProgressFill, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertProgressFill, put=__cordl_internal_set__invertProgressFill)) bool  _invertProgressFill;

/// @brief Field _noOperationActive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__noOperationActive, put=__cordl_internal_set__noOperationActive)) ::UnityW<::UnityEngine::GameObject>  _noOperationActive;

/// @brief Field _operationActive, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__operationActive, put=__cordl_internal_set__operationActive)) ::UnityW<::UnityEngine::GameObject>  _operationActive;

/// @brief Field _operationName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__operationName, put=__cordl_internal_set__operationName)) ::UnityW<::TMPro::TMP_Text>  _operationName;

/// @brief Field _operationNameLocalised, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__operationNameLocalised, put=__cordl_internal_set__operationNameLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _operationNameLocalised;

/// @brief Field _operations, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__operations, put=__cordl_internal_set__operations)) ::GlobalNamespace::ModPropertyFileOperations_Operation  _operations;

/// @brief Field _progressFill, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressFill, put=__cordl_internal_set__progressFill)) ::UnityW<::UnityEngine::UI::Image>  _progressFill;

/// @brief Field _progressPercent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressPercent, put=__cordl_internal_set__progressPercent)) ::UnityW<::TMPro::TMP_Text>  _progressPercent;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc672c, size 0x5c8, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__downloadSpeed() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__downloadSpeed() ;

constexpr bool const& __cordl_internal_get__invertProgressFill() const;

constexpr bool& __cordl_internal_get__invertProgressFill() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noOperationActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noOperationActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__operationActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__operationActive() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__operationName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__operationName() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__operationNameLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__operationNameLocalised() ;

constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation const& __cordl_internal_get__operations() const;

constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation& __cordl_internal_get__operations() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__progressFill() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__progressFill() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__progressPercent() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__progressPercent() ;

constexpr void __cordl_internal_set__downloadSpeed(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__invertProgressFill(bool  value) ;

constexpr void __cordl_internal_set__noOperationActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__operationActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__operationName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__operationNameLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__operations(::GlobalNamespace::ModPropertyFileOperations_Operation  value) ;

constexpr void __cordl_internal_set__progressFill(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__progressPercent(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc6cf4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyFileOperations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyFileOperations", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyFileOperations(ModPropertyFileOperations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyFileOperations", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyFileOperations(ModPropertyFileOperations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27229};

/// [SerializeField]
/// @brief Field _operations, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ModPropertyFileOperations_Operation  ____operations;

/// [Space]
/// [SerializeField]
/// @brief Field _noOperationActive, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____noOperationActive;

/// [SerializeField]
/// @brief Field _operationActive, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____operationActive;

/// [Space]
/// [SerializeField]
/// @brief Field _operationName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____operationName;

/// [SerializeField]
/// @brief Field _operationNameLocalised, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____operationNameLocalised;

/// [SerializeField]
/// @brief Field _progressPercent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____progressPercent;

/// [SerializeField]
/// @brief Field _progressFill, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____progressFill;

/// [SerializeField]
/// @brief Field _invertProgressFill, offset: 0x48, size: 0x1, def value: None
 bool  ____invertProgressFill;

/// [SerializeField]
/// @brief Field _downloadSpeed, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____downloadSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____operations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____noOperationActive) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____operationActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____operationName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____operationNameLocalised) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____progressPercent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____progressFill) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____invertProgressFill) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations, ____downloadSpeed) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
