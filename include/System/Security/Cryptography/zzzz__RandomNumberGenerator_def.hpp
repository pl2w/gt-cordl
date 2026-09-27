#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RandomNumberGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomNumberGenerator)
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RandomNumberGenerator*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RandomNumberGenerator
class CORDL_TYPE RandomNumberGenerator : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Create, addr 0xa16b0c0, size 0x54, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RandomNumberGenerator* Create() ;

/// @brief Method Create, addr 0xa16b114, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RandomNumberGenerator* Create(::StringW  rngName) ;

/// @brief Method Dispose, addr 0xa16b1b8, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa16b224, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Fill, addr 0xa16b440, size 0x4, virtual false, abstract: false, final false
static inline void Fill(::System::Span_1<uint8_t>  data) ;

/// @brief Method FillSpan, addr 0xa16b444, size 0x78, virtual false, abstract: false, final false
static inline void FillSpan(::System::Span_1<uint8_t>  data) ;

/// @brief Method GetBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetBytes(::ArrayW<uint8_t>  data) ;

/// @brief Method GetBytes, addr 0xa16b228, size 0x1e0, virtual true, abstract: false, final false
inline void GetBytes(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method GetBytes, addr 0xa16b4bc, size 0x210, virtual true, abstract: false, final false
inline void GetBytes(::System::Span_1<uint8_t>  data) ;

/// @brief Method GetInt32, addr 0xa16b8d4, size 0x150, virtual false, abstract: false, final false
static inline int32_t GetInt32(int32_t  fromInclusive, int32_t  toExclusive) ;

/// @brief Method GetInt32, addr 0xa16ba24, size 0x78, virtual false, abstract: false, final false
static inline int32_t GetInt32(int32_t  toExclusive) ;

/// @brief Method GetNonZeroBytes, addr 0xa16b408, size 0x38, virtual true, abstract: false, final false
inline void GetNonZeroBytes(::ArrayW<uint8_t>  data) ;

/// @brief Method GetNonZeroBytes, addr 0xa16b6cc, size 0x208, virtual true, abstract: false, final false
inline void GetNonZeroBytes(::System::Span_1<uint8_t>  data) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* New_ctor() ;

/// @brief Method .ctor, addr 0xa16b0b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomNumberGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomNumberGenerator(RandomNumberGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomNumberGenerator(RandomNumberGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::RandomNumberGenerator) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
