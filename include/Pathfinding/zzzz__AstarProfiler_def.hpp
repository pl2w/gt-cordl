#pragma once
// IWYU pragma private; include "Pathfinding/AstarProfiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AstarProfiler)
namespace Pathfinding {
class AstarProfiler_ProfilePoint;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Pathfinding {
class AstarProfiler;
}
namespace Pathfinding {
class AstarProfiler_ProfilePoint;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarProfiler*);
MARK_REF_T(::Pathfinding::AstarProfiler_ProfilePoint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarProfiler*, "Pathfinding", "AstarProfiler");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarProfiler_ProfilePoint*, "Pathfinding", "AstarProfiler/ProfilePoint");
// Dependencies Pathfinding.AstarProfiler::ProfilePoint, System.DateTime, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarProfiler
class CORDL_TYPE AstarProfiler : public ::System::Object {
public:
// Declarations
using ProfilePoint = ::Pathfinding::AstarProfiler_ProfilePoint;

/// @brief Field fastProfileNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fastProfileNames, put=setStaticF_fastProfileNames)) ::ArrayW<::StringW>  fastProfileNames;

/// @brief Field fastProfiles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fastProfiles, put=setStaticF_fastProfiles)) ::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>  fastProfiles;

/// @brief Field profiles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_profiles, put=setStaticF_profiles)) ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*  profiles;

/// @brief Field startTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_startTime, put=setStaticF_startTime)) ::System::DateTime  startTime;

/// [Conditional("ProfileAstar")]
/// @brief Method EndFastProfile, addr 0x5eb35d4, size 0x98, virtual false, abstract: false, final false
static inline void EndFastProfile(int32_t  tag) ;

/// [Conditional("ASTAR_UNITY_PRO_PROFILER")]
/// @brief Method EndProfile, addr 0x5eb366c, size 0x4, virtual false, abstract: false, final false
static inline void EndProfile() ;

/// [Conditional("ProfileAstar")]
/// @brief Method EndProfile, addr 0x5eb37cc, size 0x1ac, virtual false, abstract: false, final false
static inline void EndProfile(::StringW  tag) ;

/// [Conditional("ProfileAstar")]
/// @brief Method InitializeFastProfile, addr 0x5eb327c, size 0x260, virtual false, abstract: false, final false
static inline void InitializeFastProfile(::ArrayW<::StringW>  profileNames) ;

static inline ::Pathfinding::AstarProfiler* New_ctor() ;

/// [Conditional("ProfileAstar")]
/// @brief Method PrintFastResults, addr 0x5eb3b18, size 0x5a0, virtual false, abstract: false, final false
static inline void PrintFastResults() ;

/// [Conditional("ProfileAstar")]
/// @brief Method PrintResults, addr 0x5eb40b8, size 0x82c, virtual false, abstract: false, final false
static inline void PrintResults() ;

/// [Conditional("ProfileAstar")]
/// @brief Method Reset, addr 0x5eb3978, size 0x1a0, virtual false, abstract: false, final false
static inline void Reset() ;

/// [Conditional("ProfileAstar")]
/// @brief Method StartFastProfile, addr 0x5eb3548, size 0x8c, virtual false, abstract: false, final false
static inline void StartFastProfile(int32_t  tag) ;

/// [Conditional("ProfileAstar")]
/// @brief Method StartProfile, addr 0x5eb3670, size 0x15c, virtual false, abstract: false, final false
static inline void StartProfile(::StringW  tag) ;

/// @brief Method .ctor, addr 0x5eb3274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_fastProfileNames() ;

static inline ::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*> getStaticF_fastProfiles() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>* getStaticF_profiles() ;

static inline ::System::DateTime getStaticF_startTime() ;

static inline void setStaticF_fastProfileNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF_fastProfiles(::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>  value) ;

static inline void setStaticF_profiles(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*  value) ;

static inline void setStaticF_startTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarProfiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarProfiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarProfiler(AstarProfiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarProfiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarProfiler(AstarProfiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::AstarProfiler) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarProfiler/ProfilePoint
class CORDL_TYPE AstarProfiler_ProfilePoint : public ::System::Object {
public:
// Declarations
/// @brief Field tmpBytes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpBytes, put=__cordl_internal_set_tmpBytes)) int64_t  tmpBytes;

/// @brief Field totalBytes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalBytes, put=__cordl_internal_set_totalBytes)) int64_t  totalBytes;

/// @brief Field totalCalls, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCalls, put=__cordl_internal_set_totalCalls)) int32_t  totalCalls;

/// @brief Field watch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_watch, put=__cordl_internal_set_watch)) ::System::Diagnostics::Stopwatch*  watch;

static inline ::Pathfinding::AstarProfiler_ProfilePoint* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_tmpBytes() const;

constexpr int64_t& __cordl_internal_get_tmpBytes() ;

constexpr int64_t const& __cordl_internal_get_totalBytes() const;

constexpr int64_t& __cordl_internal_get_totalBytes() ;

constexpr int32_t const& __cordl_internal_get_totalCalls() const;

constexpr int32_t& __cordl_internal_get_totalCalls() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_watch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch() ;

constexpr void __cordl_internal_set_tmpBytes(int64_t  value) ;

constexpr void __cordl_internal_set_totalBytes(int64_t  value) ;

constexpr void __cordl_internal_set_totalCalls(int32_t  value) ;

constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x5eb34dc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarProfiler_ProfilePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarProfiler_ProfilePoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarProfiler_ProfilePoint(AstarProfiler_ProfilePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarProfiler_ProfilePoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarProfiler_ProfilePoint(AstarProfiler_ProfilePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21409};

/// @brief Field watch, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___watch;

/// @brief Field totalCalls, offset: 0x18, size: 0x4, def value: None
 int32_t  ___totalCalls;

/// @brief Field tmpBytes, offset: 0x20, size: 0x8, def value: None
 int64_t  ___tmpBytes;

/// @brief Field totalBytes, offset: 0x28, size: 0x8, def value: None
 int64_t  ___totalBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarProfiler_ProfilePoint, ___watch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarProfiler_ProfilePoint, ___totalCalls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarProfiler_ProfilePoint, ___tmpBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarProfiler_ProfilePoint, ___totalBytes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarProfiler_ProfilePoint) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
