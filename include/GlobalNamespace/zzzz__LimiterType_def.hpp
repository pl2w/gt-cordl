#pragma once
// IWYU pragma private; include "GlobalNamespace/LimiterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimitType_1_def.hpp"
CORDL_MODULE_EXPORT(LimiterType)
namespace GlobalNamespace {
class CallLimiter;
}
// Forward declare root types
namespace GlobalNamespace {
class LimiterType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LimiterType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LimiterType*, "", "LimiterType");
// Dependencies CallLimitType`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LimiterType
class CORDL_TYPE LimiterType : public ::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*> {
public:
// Declarations
static inline ::GlobalNamespace::LimiterType* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac4c94, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LimiterType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LimiterType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LimiterType(LimiterType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LimiterType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LimiterType(LimiterType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LimiterType) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
