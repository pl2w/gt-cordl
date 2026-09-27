#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDRequestData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KIDRequestData)
// Forward declare root types
namespace GlobalNamespace {
class KIDRequestData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDRequestData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDRequestData*, "", "KIDRequestData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDRequestData
class CORDL_TYPE KIDRequestData : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::KIDRequestData* New_ctor() ;

/// @brief Method .ctor, addr 0x5a26144, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDRequestData(KIDRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDRequestData(KIDRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2874};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDRequestData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
