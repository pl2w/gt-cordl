#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ByteArraySlice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArraySlice)
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::ByteArraySlice*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ByteArraySlice*, "ExitGames.Client.Photon", "ByteArraySlice");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.ByteArraySlice
class CORDL_TYPE ByteArraySlice : public ::System::Object {
public:
// Declarations
/// @brief Field Buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::ArrayW<uint8_t>  Buffer;

/// @brief Field Count, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) int32_t  Count;

/// @brief Field Offset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) int32_t  Offset;

/// @brief Field returnPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnPool, put=__cordl_internal_set_returnPool)) ::ExitGames::Client::Photon::ByteArraySlicePool*  returnPool;

/// @brief Field stackIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_stackIndex, put=__cordl_internal_set_stackIndex)) int32_t  stackIndex;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa6b6aec, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor() ;

static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor(::ExitGames::Client::Photon::ByteArraySlicePool*  returnPool, int32_t  stackIndex) ;

/// @brief Method Release, addr 0xa6b6af0, size 0x2c, virtual false, abstract: false, final false
inline bool Release() ;

/// @brief Method Reset, addr 0xa6b6d48, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Buffer() ;

constexpr int32_t const& __cordl_internal_get_Count() const;

constexpr int32_t& __cordl_internal_get_Count() ;

constexpr int32_t const& __cordl_internal_get_Offset() const;

constexpr int32_t& __cordl_internal_get_Offset() ;

constexpr ::ExitGames::Client::Photon::ByteArraySlicePool* const& __cordl_internal_get_returnPool() const;

constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& __cordl_internal_get_returnPool() ;

constexpr int32_t const& __cordl_internal_get_stackIndex() const;

constexpr int32_t& __cordl_internal_get_stackIndex() ;

constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_Count(int32_t  value) ;

constexpr void __cordl_internal_set_Offset(int32_t  value) ;

constexpr void __cordl_internal_set_returnPool(::ExitGames::Client::Photon::ByteArraySlicePool*  value) ;

constexpr void __cordl_internal_set_stackIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6b6abc, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa6b6a5c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method .ctor, addr 0xa6b69b8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::ByteArraySlicePool*  returnPool, int32_t  stackIndex) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteArraySlice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteArraySlice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteArraySlice(ByteArraySlice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteArraySlice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteArraySlice(ByteArraySlice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26411};

/// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Buffer;

/// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Offset;

/// @brief Field Count, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Count;

/// @brief Field returnPool, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ByteArraySlicePool*  ___returnPool;

/// @brief Field stackIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___stackIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___returnPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___stackIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::ByteArraySlice) == 0x30, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
