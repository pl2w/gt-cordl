#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/MatchEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchEvaluator)
namespace System::Text::RegularExpressions {
class Match;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class MatchEvaluator;
}
// Write type traits
MARK_REF_T(::System::Text::RegularExpressions::MatchEvaluator*);
DEFINE_IL2CPP_CLASS(::System::Text::RegularExpressions::MatchEvaluator*, "System.Text.RegularExpressions", "MatchEvaluator");
// Dependencies System.MulticastDelegate
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.MatchEvaluator
class CORDL_TYPE MatchEvaluator : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xad10b08, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::System::Text::RegularExpressions::Match*  match) ;

static inline ::System::Text::RegularExpressions::MatchEvaluator* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad10a00, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchEvaluator(MatchEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchEvaluator(MatchEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::RegularExpressions::MatchEvaluator) == 0x80, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
