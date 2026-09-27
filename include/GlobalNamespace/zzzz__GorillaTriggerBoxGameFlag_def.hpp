#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxGameFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerBoxGameFlag)
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerBoxGameFlag;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerBoxGameFlag*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerBoxGameFlag*, "", "GorillaTriggerBoxGameFlag");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerBoxGameFlag
class CORDL_TYPE GorillaTriggerBoxGameFlag : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field functionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_functionName, put=__cordl_internal_set_functionName)) ::StringW  functionName;

static inline ::GlobalNamespace::GorillaTriggerBoxGameFlag* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x579dee4, size 0x8c, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::StringW const& __cordl_internal_get_functionName() const;

constexpr ::StringW& __cordl_internal_get_functionName() ;

constexpr void __cordl_internal_set_functionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x579df70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerBoxGameFlag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxGameFlag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerBoxGameFlag(GorillaTriggerBoxGameFlag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxGameFlag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerBoxGameFlag(GorillaTriggerBoxGameFlag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1512};

/// @brief Field functionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___functionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxGameFlag, ___functionName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTriggerBoxGameFlag) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
