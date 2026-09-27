#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipBeginQuestCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__QuestBeginLoginV2RequestCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipBeginQuestCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipBeginQuestCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipBeginQuestCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipBeginQuestCallback*, "", "MothershipBeginQuestCallback");
// Dependencies QuestBeginLoginV2RequestCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipBeginQuestCallback
class CORDL_TYPE MothershipBeginQuestCallback : public ::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipBeginQuestCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53b9138, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53b90d8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipBeginQuestCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipBeginQuestCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipBeginQuestCallback(MothershipBeginQuestCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipBeginQuestCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipBeginQuestCallback(MothershipBeginQuestCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9748};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipBeginQuestCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
