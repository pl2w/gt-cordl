#pragma once
// IWYU pragma private; include "Pathfinding/RichPathPart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RichPathPart)
namespace Pathfinding::Util {
class IAstarPooledObject;
}
// Forward declare root types
namespace Pathfinding {
class RichPathPart;
}
// Write type traits
MARK_REF_T(::Pathfinding::RichPathPart*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RichPathPart*, "Pathfinding", "RichPathPart");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichPathPart
class CORDL_TYPE RichPathPart : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr operator  ::Pathfinding::Util::IAstarPooledObject*() noexcept;

static inline ::Pathfinding::RichPathPart* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnterPool() ;

/// @brief Method .ctor, addr 0x5e437d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* i___Pathfinding__Util__IAstarPooledObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichPathPart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichPathPart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichPathPart(RichPathPart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichPathPart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichPathPart(RichPathPart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::RichPathPart) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
