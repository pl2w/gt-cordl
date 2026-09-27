#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCosmeticType)
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckCosmeticType;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticType*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticType*, "Liv.Lck.Cosmetics", "LckCosmeticType");
// [CreateAssetMenu(fileName = "NewLckCosmeticType", menuName = "LIV/LCK/LCK Cosmetics/Cosmetic Type")]
// Dependencies UnityEngine.ScriptableObject
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticType
class CORDL_TYPE LckCosmeticType : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field TypeValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeValue, put=__cordl_internal_set_TypeValue)) ::StringW  TypeValue;

static inline ::Liv::Lck::Cosmetics::LckCosmeticType* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TypeValue() const;

constexpr ::StringW& __cordl_internal_get_TypeValue() ;

constexpr void __cordl_internal_set_TypeValue(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d6a400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticType(LckCosmeticType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticType(LckCosmeticType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24990};

/// [Tooltip("The string value for this cosmetic type (e.g \'Keychain\', \'Skin\').")]
/// @brief Field TypeValue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TypeValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticType, ___TypeValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticType) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
