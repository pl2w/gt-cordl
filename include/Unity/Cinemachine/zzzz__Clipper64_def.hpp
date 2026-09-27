#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Clipper64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__ClipperBase_def.hpp"
CORDL_MODULE_EXPORT(Clipper64)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct ClipType;
}
namespace Unity::Cinemachine {
struct FillRule;
}
namespace Unity::Cinemachine {
struct PathType;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
class PolyTree64;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Clipper64;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Clipper64*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Clipper64*, "Unity.Cinemachine", "Clipper64");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Unity.Cinemachine.ClipperBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Clipper64
class CORDL_TYPE Clipper64 : public ::Unity::Cinemachine::ClipperBase {
public:
// Declarations
/// @brief Method AddClip, addr 0xaefa0a0, size 0x10, virtual false, abstract: false, final false
inline void AddClip(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method AddOpenSubject, addr 0xaefa090, size 0x10, virtual false, abstract: false, final false
inline void AddOpenSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method AddPath, addr 0xaefa070, size 0x8, virtual false, abstract: false, final false
inline void AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddPaths, addr 0xaefa078, size 0x8, virtual false, abstract: false, final false
inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddSubject, addr 0xaefa080, size 0x10, virtual false, abstract: false, final false
inline void AddSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method Execute, addr 0xaefa45c, size 0x98, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTree64*  polytree) ;

/// @brief Method Execute, addr 0xaefa2a4, size 0x148, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTree64*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  openPaths) ;

/// @brief Method Execute, addr 0xaefa20c, size 0x98, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed) ;

/// @brief Method Execute, addr 0xaefa0b0, size 0x15c, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen) ;

static inline ::Unity::Cinemachine::Clipper64* New_ctor() ;

/// @brief Method .ctor, addr 0xaefa068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Clipper64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Clipper64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Clipper64(Clipper64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clipper64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clipper64(Clipper64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Clipper64) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine
