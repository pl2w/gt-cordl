#pragma once
// IWYU pragma private; include "Fusion/ScheduledRequestsExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScheduledRequestsExt)
namespace Fusion {
struct ScheduledRequests;
}
// Forward declare root types
namespace Fusion {
class ScheduledRequestsExt;
}
// Write type traits
MARK_REF_T(::Fusion::ScheduledRequestsExt*);
DEFINE_IL2CPP_CLASS(::Fusion::ScheduledRequestsExt*, "Fusion", "ScheduledRequestsExt");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ScheduledRequestsExt
class CORDL_TYPE ScheduledRequestsExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Clear, addr 0x5f7a844, size 0x10, virtual false, abstract: false, final false
static inline void Clear(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target) ;

/// [Extension]
/// @brief Method IsSet, addr 0x5f7a824, size 0x10, virtual false, abstract: false, final false
static inline bool IsSet(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target) ;

/// [Extension]
/// @brief Method Set, addr 0x5f7a834, size 0x10, virtual false, abstract: false, final false
static inline void Set(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledRequestsExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledRequestsExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledRequestsExt(ScheduledRequestsExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledRequestsExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledRequestsExt(ScheduledRequestsExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ScheduledRequestsExt) == 0x10, "Size mismatch!");

} // namespace end def Fusion
