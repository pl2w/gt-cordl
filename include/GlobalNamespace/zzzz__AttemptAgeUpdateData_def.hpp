#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttemptAgeUpdateData)
namespace GlobalNamespace {
struct SessionStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class AttemptAgeUpdateData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AttemptAgeUpdateData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AttemptAgeUpdateData*, "", "AttemptAgeUpdateData");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AttemptAgeUpdateData
class CORDL_TYPE AttemptAgeUpdateData : public ::System::Object {
public:
// Declarations
/// @brief Field status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::GlobalNamespace::SessionStatus  status;

static inline ::GlobalNamespace::AttemptAgeUpdateData* New_ctor(::GlobalNamespace::SessionStatus  status) ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get_status() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_status(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a257a4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SessionStatus  status) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttemptAgeUpdateData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttemptAgeUpdateData(AttemptAgeUpdateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttemptAgeUpdateData(AttemptAgeUpdateData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2858};

/// @brief Field status, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ___status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AttemptAgeUpdateData, ___status) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AttemptAgeUpdateData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
