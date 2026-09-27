#pragma once
// IWYU pragma private; include "Pathfinding/Profile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profile)
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Pathfinding {
class Profile;
}
// Write type traits
MARK_REF_T(::Pathfinding::Profile*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Profile*, "Pathfinding", "Profile");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Profile
class CORDL_TYPE Profile : public ::System::Object {
public:
// Declarations
/// @brief Field control, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_control, put=__cordl_internal_set_control)) int32_t  control;

/// @brief Field counter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_counter, put=__cordl_internal_set_counter)) int32_t  counter;

/// @brief Field mem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mem, put=__cordl_internal_set_mem)) int64_t  mem;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field smem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_smem, put=__cordl_internal_set_smem)) int64_t  smem;

/// @brief Field watch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_watch, put=__cordl_internal_set_watch)) ::System::Diagnostics::Stopwatch*  watch;

/// [Conditional("PROFILE")]
/// @brief Method ConsoleLog, addr 0x5ebb980, size 0x70, virtual false, abstract: false, final false
inline void ConsoleLog() ;

/// [Conditional("PROFILE")]
/// @brief Method Control, addr 0x5ebbae8, size 0x190, virtual false, abstract: false, final false
inline void Control(::Pathfinding::Profile*  other) ;

/// @brief Method ControlValue, addr 0x5ebb814, size 0x8, virtual false, abstract: false, final false
inline int32_t ControlValue() ;

/// [Conditional("PROFILE")]
/// @brief Method Log, addr 0x5ebb910, size 0x70, virtual false, abstract: false, final false
inline void Log() ;

static inline ::Pathfinding::Profile* New_ctor(::StringW  name) ;

/// @brief Method Run, addr 0x5ebb8b0, size 0x20, virtual false, abstract: false, final false
inline void Run(::System::Action*  action) ;

/// [Conditional("PROFILE")]
/// @brief Method Start, addr 0x5ebb8d0, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

/// [Conditional("PROFILE")]
/// @brief Method Stop, addr 0x5ebb8e8, size 0x28, virtual false, abstract: false, final false
inline void Stop() ;

/// [Conditional("PROFILE")]
/// @brief Method Stop, addr 0x5ebb9f0, size 0xf8, virtual false, abstract: false, final false
inline void Stop(int32_t  control) ;

/// @brief Method ToString, addr 0x5ebbc78, size 0x25c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteCSV, addr 0x5ebb8ac, size 0x4, virtual false, abstract: false, final false
static inline void WriteCSV(::StringW  path, /* [ParamArray] */ ::ArrayW<::Pathfinding::Profile*>  profiles) ;

constexpr int32_t const& __cordl_internal_get_control() const;

constexpr int32_t& __cordl_internal_get_control() ;

constexpr int32_t const& __cordl_internal_get_counter() const;

constexpr int32_t& __cordl_internal_get_counter() ;

constexpr int64_t const& __cordl_internal_get_mem() const;

constexpr int64_t& __cordl_internal_get_mem() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int64_t const& __cordl_internal_get_smem() const;

constexpr int64_t& __cordl_internal_get_smem() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_watch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch() ;

constexpr void __cordl_internal_set_control(int32_t  value) ;

constexpr void __cordl_internal_set_counter(int32_t  value) ;

constexpr void __cordl_internal_set_mem(int64_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_smem(int64_t  value) ;

constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x5ebb81c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Profile(Profile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profile(Profile const& ) = delete;

/// @brief Field PROFILE_MEM offset 0xffffffff size 0x1
static constexpr bool  PROFILE_MEM{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21422};

/// @brief Field dontCountFirst offset 0xffffffff size 0x1
static constexpr bool  dontCountFirst{false};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field watch, offset: 0x18, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___watch;

/// @brief Field counter, offset: 0x20, size: 0x4, def value: None
 int32_t  ___counter;

/// @brief Field mem, offset: 0x28, size: 0x8, def value: None
 int64_t  ___mem;

/// @brief Field smem, offset: 0x30, size: 0x8, def value: None
 int64_t  ___smem;

/// @brief Field control, offset: 0x38, size: 0x4, def value: None
 int32_t  ___control;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Profile, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Profile, ___watch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Profile, ___counter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Profile, ___mem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Profile, ___smem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Profile, ___control) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Profile) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
