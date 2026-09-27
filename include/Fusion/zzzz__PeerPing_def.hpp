#pragma once
// IWYU pragma private; include "Fusion/PeerPing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerPing)
namespace Fusion::Protocol {
class ReflexiveInfo;
}
// Forward declare root types
namespace Fusion {
class PeerPing;
}
// Write type traits
MARK_REF_T(::Fusion::PeerPing*);
DEFINE_IL2CPP_CLASS(::Fusion::PeerPing*, "Fusion", "PeerPing");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.PeerPing
class CORDL_TYPE PeerPing : public ::System::Object {
public:
// Declarations
/// @brief Field AttemptCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttemptCount, put=__cordl_internal_set_AttemptCount)) int32_t  AttemptCount;

/// @brief Field NextAttemptCountDown, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextAttemptCountDown, put=__cordl_internal_set_NextAttemptCountDown)) float_t  NextAttemptCountDown;

/// @brief Field ReflexiveInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReflexiveInfo, put=__cordl_internal_set_ReflexiveInfo)) ::Fusion::Protocol::ReflexiveInfo*  ReflexiveInfo;

static inline ::Fusion::PeerPing* New_ctor(::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo) ;

/// @brief Method ToString, addr 0x5f7a630, size 0x1f4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_AttemptCount() const;

constexpr int32_t& __cordl_internal_get_AttemptCount() ;

constexpr float_t const& __cordl_internal_get_NextAttemptCountDown() const;

constexpr float_t& __cordl_internal_get_NextAttemptCountDown() ;

constexpr ::Fusion::Protocol::ReflexiveInfo* const& __cordl_internal_get_ReflexiveInfo() const;

constexpr ::Fusion::Protocol::ReflexiveInfo*& __cordl_internal_get_ReflexiveInfo() ;

constexpr void __cordl_internal_set_AttemptCount(int32_t  value) ;

constexpr void __cordl_internal_set_NextAttemptCountDown(float_t  value) ;

constexpr void __cordl_internal_set_ReflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value) ;

/// @brief Method .ctor, addr 0x5f7a5d8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerPing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerPing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerPing(PeerPing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerPing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerPing(PeerPing const& ) = delete;

/// @brief Field PING_DELAY offset 0xffffffff size 0x4
static constexpr float_t  PING_DELAY{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18853};

/// @brief Field AttemptCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___AttemptCount;

/// @brief Field NextAttemptCountDown, offset: 0x14, size: 0x4, def value: None
 float_t  ___NextAttemptCountDown;

/// @brief Field ReflexiveInfo, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Protocol::ReflexiveInfo*  ___ReflexiveInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::PeerPing, ___AttemptCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::PeerPing, ___NextAttemptCountDown) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::PeerPing, ___ReflexiveInfo) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::PeerPing) == 0x20, "Size mismatch!");

} // namespace end def Fusion
