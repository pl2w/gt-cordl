#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ByteArraySlicePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArraySlicePool)
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::ByteArraySlicePool*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ByteArraySlicePool*, "ExitGames.Client.Photon", "ByteArraySlicePool");
// Dependencies System.Collections.Generic.Stack`1<T>, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.ByteArraySlicePool
class CORDL_TYPE ByteArraySlicePool : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AllocationCounter)) int32_t  AllocationCounter;

 __declspec(property(get=get_MinStackIndex, put=set_MinStackIndex)) int32_t  MinStackIndex;

/// @brief Field allocationCounter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_allocationCounter, put=__cordl_internal_set_allocationCounter)) int32_t  allocationCounter;

/// @brief Field minStackIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minStackIndex, put=__cordl_internal_set_minStackIndex)) int32_t  minStackIndex;

/// @brief Field poolTiers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolTiers, put=__cordl_internal_set_poolTiers)) ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>  poolTiers;

/// @brief Method Acquire, addr 0xa6b6f2c, size 0x20c, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ByteArraySlice* Acquire(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Acquire, addr 0xa6b72c4, size 0x340, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ByteArraySlice* Acquire(int32_t  minByteCount) ;

/// @brief Method ClearPools, addr 0xa6b7604, size 0x268, virtual false, abstract: false, final false
inline void ClearPools(int32_t  lower, int32_t  upper) ;

static inline ::ExitGames::Client::Photon::ByteArraySlicePool* New_ctor() ;

/// @brief Method PopOrCreate, addr 0xa6b7138, size 0x18c, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ByteArraySlice* PopOrCreate(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*  stack, int32_t  stackIndex) ;

/// @brief Method Release, addr 0xa6b6b1c, size 0x22c, virtual false, abstract: false, final false
inline bool Release(::ExitGames::Client::Photon::ByteArraySlice*  slice, int32_t  stackIndex) ;

constexpr int32_t const& __cordl_internal_get_allocationCounter() const;

constexpr int32_t& __cordl_internal_get_allocationCounter() ;

constexpr int32_t const& __cordl_internal_get_minStackIndex() const;

constexpr int32_t& __cordl_internal_get_minStackIndex() ;

constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*> const& __cordl_internal_get_poolTiers() const;

constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>& __cordl_internal_get_poolTiers() ;

constexpr void __cordl_internal_set_allocationCounter(int32_t  value) ;

constexpr void __cordl_internal_set_minStackIndex(int32_t  value) ;

constexpr void __cordl_internal_set_poolTiers(::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>  value) ;

/// @brief Method .ctor, addr 0xa6b6d88, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllocationCounter, addr 0xa6b6d80, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AllocationCounter() ;

/// @brief Method get_MinStackIndex, addr 0xa6b6d50, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinStackIndex() ;

/// @brief Method set_MinStackIndex, addr 0xa6b6d58, size 0x28, virtual false, abstract: false, final false
inline void set_MinStackIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteArraySlicePool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteArraySlicePool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteArraySlicePool(ByteArraySlicePool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteArraySlicePool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteArraySlicePool(ByteArraySlicePool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26412};

/// @brief Field minStackIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___minStackIndex;

/// @brief Field poolTiers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>  ___poolTiers;

/// @brief Field allocationCounter, offset: 0x20, size: 0x4, def value: None
 int32_t  ___allocationCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___minStackIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___poolTiers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___allocationCounter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::ByteArraySlicePool) == 0x28, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
