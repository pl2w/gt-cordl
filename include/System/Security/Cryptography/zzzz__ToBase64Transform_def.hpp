#pragma once
// IWYU pragma private; include "System/Security/Cryptography/ToBase64Transform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToBase64Transform)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class ToBase64Transform;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::ToBase64Transform*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::ToBase64Transform*, "System.Security.Cryptography", "ToBase64Transform");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.ToBase64Transform
class CORDL_TYPE ToBase64Transform : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanReuseTransform)) bool  CanReuseTransform;

 __declspec(property(get=get_CanTransformMultipleBlocks)) bool  CanTransformMultipleBlocks;

 __declspec(property(get=get_InputBlockSize)) int32_t  InputBlockSize;

 __declspec(property(get=get_OutputBlockSize)) int32_t  OutputBlockSize;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr operator  ::System::Security::Cryptography::ICryptoTransform*() noexcept;

/// @brief Method Clear, addr 0xa162ea4, size 0x6c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0xa162ea0, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa162f10, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0xa162f14, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::System::Security::Cryptography::ToBase64Transform* New_ctor() ;

/// @brief Method TransformBlock, addr 0xa162a2c, size 0x258, virtual true, abstract: false, final true
inline int32_t TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset) ;

/// @brief Method TransformFinalBlock, addr 0xa162c84, size 0x21c, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

/// @brief Method .ctor, addr 0xa162fa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanReuseTransform, addr 0xa162a24, size 0x8, virtual true, abstract: false, final false
inline bool get_CanReuseTransform() ;

/// @brief Method get_CanTransformMultipleBlocks, addr 0xa162a1c, size 0x8, virtual true, abstract: false, final true
inline bool get_CanTransformMultipleBlocks() ;

/// @brief Method get_InputBlockSize, addr 0xa162a0c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize, addr 0xa162a14, size 0x8, virtual true, abstract: false, final true
inline int32_t get_OutputBlockSize() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToBase64Transform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToBase64Transform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToBase64Transform(ToBase64Transform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToBase64Transform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToBase64Transform(ToBase64Transform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6075};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::ToBase64Transform) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
