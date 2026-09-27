#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticIDUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticIDUtils)
// Forward declare root types
namespace GlobalNamespace {
class CosmeticIDUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticIDUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticIDUtils*, "", "CosmeticIDUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticIDUtils
class CORDL_TYPE CosmeticIDUtils : public ::System::Object {
public:
// Declarations
/// @brief Method IntToPlayFabId, addr 0x565e494, size 0x148, virtual false, abstract: false, final false
static inline ::StringW IntToPlayFabId(int32_t  id) ;

/// @brief Method PlayFabIdToIndexInCategory, addr 0x565e204, size 0xc, virtual false, abstract: false, final false
static inline int32_t PlayFabIdToIndexInCategory(::StringW  playFabIdString) ;

/// @brief Method PlayFabIdToInt, addr 0x565e210, size 0xc, virtual false, abstract: false, final false
static inline int32_t PlayFabIdToInt(::StringW  playFabIdString) ;

/// @brief Method _PlayFabIdToInt, addr 0x565e21c, size 0x278, virtual false, abstract: false, final false
static inline int32_t _PlayFabIdToInt(::StringW  playFabIdString, int32_t  start) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticIDUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticIDUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticIDUtils(CosmeticIDUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticIDUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticIDUtils(CosmeticIDUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CosmeticIDUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
