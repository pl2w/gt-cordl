#pragma once
// IWYU pragma private; include "Fusion/ReadWriteUtilsForWeaver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadWriteUtilsForWeaver)
// Forward declare root types
namespace Fusion {
class ReadWriteUtilsForWeaver;
}
// Write type traits
MARK_REF_T(::Fusion::ReadWriteUtilsForWeaver*);
DEFINE_IL2CPP_CLASS(::Fusion::ReadWriteUtilsForWeaver*, "Fusion", "ReadWriteUtilsForWeaver");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReadWriteUtilsForWeaver
class CORDL_TYPE ReadWriteUtilsForWeaver : public ::System::Object {
public:
// Declarations
/// [Preserve]
/// @brief Method GetByteArrayHashCode, addr 0x5fa1a4c, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetByteArrayHashCode(uint8_t*  ptr, int32_t  length) ;

/// [Preserve]
/// @brief Method GetByteCountUtf8NoHash, addr 0x5fa1abc, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetByteCountUtf8NoHash(::StringW  value) ;

/// [Preserve]
/// @brief Method GetStringHashCode, addr 0x5fa1ac4, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetStringHashCode(::StringW  value, int32_t  maxLength) ;

/// [Preserve]
/// @brief Method GetWordCountString, addr 0x5fa1e98, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetWordCountString(int32_t  capacity, bool  withCaching) ;

/// [Preserve]
/// @brief Method ReadBoolean, addr 0x5fa1a30, size 0x10, virtual false, abstract: false, final false
static inline bool ReadBoolean(int32_t*  data) ;

/// [Preserve]
/// @brief Method ReadStringUtf32NoHash, addr 0x5fa1ba4, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ReadStringUtf32NoHash(int32_t*  ptr, int32_t  maxLength, ::by_ref<::StringW>  result) ;

/// [Preserve]
/// @brief Method ReadStringUtf32WithHash, addr 0x5fa1d68, size 0x130, virtual false, abstract: false, final false
static inline int32_t ReadStringUtf32WithHash(int32_t*  ptr, int32_t  maxLength, ::by_ref<::StringW>  cache) ;

/// [Preserve]
/// @brief Method ReadStringUtf8NoHash, addr 0x5fa1ab4, size 0x8, virtual false, abstract: false, final false
static inline int32_t ReadStringUtf8NoHash(void*  source, ::by_ref<::StringW>  result) ;

/// [Preserve]
/// @brief Method VerifyRawNetworkUnwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t VerifyRawNetworkUnwrap(int32_t  actual, int32_t  maxBytes) ;

/// [Preserve]
/// @brief Method VerifyRawNetworkWrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t VerifyRawNetworkWrap(int32_t  actual, int32_t  maxBytes) ;

/// [Preserve]
/// @brief Method WriteBoolean, addr 0x5fa1a40, size 0xc, virtual false, abstract: false, final false
static inline void WriteBoolean(int32_t*  data, bool  value) ;

/// [Preserve]
/// @brief Method WriteStringUtf32NoHash, addr 0x5fa1b44, size 0x60, virtual false, abstract: false, final false
static inline int32_t WriteStringUtf32NoHash(int32_t*  ptr, int32_t  maxLength, ::StringW  value) ;

/// [Preserve]
/// @brief Method WriteStringUtf32WithHash, addr 0x5fa1c88, size 0xe0, virtual false, abstract: false, final false
static inline int32_t WriteStringUtf32WithHash(int32_t*  ptr, int32_t  maxLength, ::StringW  value, ::by_ref<::StringW>  cache) ;

/// [Preserve]
/// @brief Method WriteStringUtf8NoHash, addr 0x5fa1aac, size 0x8, virtual false, abstract: false, final false
static inline int32_t WriteStringUtf8NoHash(void*  destination, ::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadWriteUtilsForWeaver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadWriteUtilsForWeaver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadWriteUtilsForWeaver(ReadWriteUtilsForWeaver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadWriteUtilsForWeaver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadWriteUtilsForWeaver(ReadWriteUtilsForWeaver const& ) = delete;

/// @brief Field ACCURACY offset 0xffffffff size 0x4
static constexpr float_t  ACCURACY{static_cast<float_t>(1024.0f)};

/// @brief Field STRING_DATA_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  STRING_DATA_INDEX{static_cast<int32_t>(0x2)};

/// @brief Field STRING_HASHCODE_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  STRING_HASHCODE_INDEX{static_cast<int32_t>(0x1)};

/// @brief Field STRING_LENGTH_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  STRING_LENGTH_INDEX{static_cast<int32_t>(0x0)};

/// @brief Field STRING_NOHASHCODE_DATA_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  STRING_NOHASHCODE_DATA_INDEX{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ReadWriteUtilsForWeaver) == 0x10, "Size mismatch!");

} // namespace end def Fusion
