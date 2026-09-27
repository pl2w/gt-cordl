#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProgressionUtil)
namespace GlobalNamespace {
struct ProgressionUtil__WaitForMothershipSessionToken_d__0;
}
namespace GlobalNamespace {
struct ProgressionUtil__WaitForPlayFabSessionTicket_d__1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressionUtil;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressionUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionUtil*, "", "ProgressionUtil");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionUtil
class CORDL_TYPE ProgressionUtil : public ::System::Object {
public:
// Declarations
using _WaitForMothershipSessionToken_d__0 = ::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0;

using _WaitForPlayFabSessionTicket_d__1 = ::GlobalNamespace::ProgressionUtil__WaitForPlayFabSessionTicket_d__1;

static inline ::GlobalNamespace::ProgressionUtil* New_ctor() ;

/// [AsyncStateMachine(typeof(ProgressionUtil::<WaitForMothershipSessionToken>d__0))]
/// @brief Method WaitForMothershipSessionToken, addr 0x597bbf8, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitForMothershipSessionToken() ;

/// [AsyncStateMachine(typeof(ProgressionUtil::<WaitForPlayFabSessionTicket>d__1))]
/// @brief Method WaitForPlayFabSessionTicket, addr 0x597d18c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitForPlayFabSessionTicket() ;

/// @brief Method .ctor, addr 0x597d82c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionUtil(ProgressionUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionUtil(ProgressionUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2521};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionUtil) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
