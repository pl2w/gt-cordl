#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDFeaturesExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDFeaturesExtensions)
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDFeaturesExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDFeaturesExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDFeaturesExtensions*, "", "KIDFeaturesExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDFeaturesExtensions
class CORDL_TYPE KIDFeaturesExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method FromString, addr 0x5a26694, size 0x160, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::EKIDFeatures> FromString(::StringW  name) ;

/// [Extension]
/// @brief Method ToStandardisedString, addr 0x5a267f4, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW ToStandardisedString(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method TryGetFromString, addr 0x5a275b8, size 0x94, virtual false, abstract: false, final false
static inline bool TryGetFromString(::StringW  name, ::by_ref<::GlobalNamespace::EKIDFeatures>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDFeaturesExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDFeaturesExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDFeaturesExtensions(KIDFeaturesExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDFeaturesExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDFeaturesExtensions(KIDFeaturesExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDFeaturesExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
