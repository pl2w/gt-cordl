#pragma once
// IWYU pragma private; include "Photon/Voice/SpacingProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpacingProfile)
namespace Photon::Voice {
class SpacingProfile___c;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Photon::Voice {
class SpacingProfile;
}
namespace Photon::Voice {
class SpacingProfile___c;
}
// Write type traits
MARK_REF_T(::Photon::Voice::SpacingProfile*);
MARK_REF_T(::Photon::Voice::SpacingProfile___c*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::SpacingProfile*, "Photon.Voice", "SpacingProfile");
DEFINE_IL2CPP_CLASS(::Photon::Voice::SpacingProfile___c*, "Photon.Voice", "SpacingProfile/<>c");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.SpacingProfile
class CORDL_TYPE SpacingProfile : public ::System::Object {
public:
// Declarations
using __c = ::Photon::Voice::SpacingProfile___c;

 __declspec(property(get=get_Dump)) ::StringW  Dump;

 __declspec(property(get=get_Max)) int32_t  Max;

/// @brief Field buf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buf, put=__cordl_internal_set_buf)) ::ArrayW<int16_t>  buf;

/// @brief Field capacity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_capacity, put=__cordl_internal_set_capacity)) int32_t  capacity;

/// @brief Field flushed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_flushed, put=__cordl_internal_set_flushed)) bool  flushed;

/// @brief Field info, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::ArrayW<bool>  info;

/// @brief Field ptr, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ptr, put=__cordl_internal_set_ptr)) int32_t  ptr;

/// @brief Field watch, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_watch, put=__cordl_internal_set_watch)) ::System::Diagnostics::Stopwatch*  watch;

/// @brief Field watchLast, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_watchLast, put=__cordl_internal_set_watchLast)) int64_t  watchLast;

static inline ::Photon::Voice::SpacingProfile* New_ctor(int32_t  capacity) ;

/// @brief Method Start, addr 0xa7480a4, size 0xdc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa748180, size 0xc0, virtual false, abstract: false, final false
inline void Update(bool  lost, bool  flush) ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_buf() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_buf() ;

constexpr int32_t const& __cordl_internal_get_capacity() const;

constexpr int32_t& __cordl_internal_get_capacity() ;

constexpr bool const& __cordl_internal_get_flushed() const;

constexpr bool& __cordl_internal_get_flushed() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_info() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_info() ;

constexpr int32_t const& __cordl_internal_get_ptr() const;

constexpr int32_t& __cordl_internal_get_ptr() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_watch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch() ;

constexpr int64_t const& __cordl_internal_get_watchLast() const;

constexpr int64_t& __cordl_internal_get_watchLast() ;

constexpr void __cordl_internal_set_buf(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_capacity(int32_t  value) ;

constexpr void __cordl_internal_set_flushed(bool  value) ;

constexpr void __cordl_internal_set_info(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_ptr(int32_t  value) ;

constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_watchLast(int64_t  value) ;

/// @brief Method .ctor, addr 0xa74807c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// [CompilerGenerated]
/// @brief Method <get_Dump>b__11_0, addr 0xa7485f0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW _get_Dump_b__11_0(int16_t  v, int32_t  i) ;

/// @brief Method get_Dump, addr 0xa748240, size 0x288, virtual false, abstract: false, final false
inline ::StringW get_Dump() ;

/// @brief Method get_Max, addr 0xa7484c8, size 0x128, virtual false, abstract: false, final false
inline int32_t get_Max() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpacingProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpacingProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpacingProfile(SpacingProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpacingProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpacingProfile(SpacingProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28432};

/// @brief Field buf, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___buf;

/// @brief Field info, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<bool>  ___info;

/// @brief Field capacity, offset: 0x20, size: 0x4, def value: None
 int32_t  ___capacity;

/// @brief Field ptr, offset: 0x24, size: 0x4, def value: None
 int32_t  ___ptr;

/// @brief Field watch, offset: 0x28, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___watch;

/// @brief Field watchLast, offset: 0x30, size: 0x8, def value: None
 int64_t  ___watchLast;

/// @brief Field flushed, offset: 0x38, size: 0x1, def value: None
 bool  ___flushed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::SpacingProfile, ___buf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___capacity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___ptr) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___watch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___watchLast) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::SpacingProfile, ___flushed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::SpacingProfile) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.SpacingProfile/<>c
class CORDL_TYPE SpacingProfile___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Voice::SpacingProfile___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Func_2<int16_t,int16_t>*  __9__13_0;

static inline ::Photon::Voice::SpacingProfile___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa748708, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Max>b__13_0, addr 0xa748710, size 0xac, virtual false, abstract: false, final false
inline int16_t _get_Max_b__13_0(int16_t  v) ;

static inline ::Photon::Voice::SpacingProfile___c* getStaticF___9() ;

static inline ::System::Func_2<int16_t,int16_t>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::Photon::Voice::SpacingProfile___c*  value) ;

static inline void setStaticF___9__13_0(::System::Func_2<int16_t,int16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpacingProfile___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpacingProfile___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpacingProfile___c(SpacingProfile___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpacingProfile___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpacingProfile___c(SpacingProfile___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::SpacingProfile___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
