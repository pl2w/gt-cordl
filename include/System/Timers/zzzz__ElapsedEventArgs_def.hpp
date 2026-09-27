#pragma once
// IWYU pragma private; include "System/Timers/ElapsedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ElapsedEventArgs)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Timers {
class ElapsedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Timers::ElapsedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Timers::ElapsedEventArgs*, "System.Timers", "ElapsedEventArgs");
// Dependencies System.DateTime, System.EventArgs
namespace System::Timers {
// Is value type: false
// CS Name: System.Timers.ElapsedEventArgs
class CORDL_TYPE ElapsedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field time, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) ::System::DateTime  time;

static inline ::System::Timers::ElapsedEventArgs* New_ctor(::System::DateTime  time) ;

constexpr ::System::DateTime const& __cordl_internal_get_time() const;

constexpr ::System::DateTime& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_time(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xad09324, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  time) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElapsedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElapsedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ElapsedEventArgs(ElapsedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElapsedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElapsedEventArgs(ElapsedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9962};

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Timers::ElapsedEventArgs, ___time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Timers::ElapsedEventArgs) == 0x18, "Size mismatch!");

} // namespace end def System::Timers
