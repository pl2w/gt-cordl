#pragma once
// IWYU pragma private; include "Fusion/ReadWriteUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadWriteUtils)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Fusion {
class ReadWriteUtils;
}
// Write type traits
MARK_REF_T(::Fusion::ReadWriteUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::ReadWriteUtils*, "Fusion", "ReadWriteUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReadWriteUtils
class CORDL_TYPE ReadWriteUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ReadFloat, addr 0x5fa19d0, size 0x8, virtual false, abstract: false, final false
static inline float_t ReadFloat(int32_t*  data) ;

/// @brief Method ReadQuaternion, addr 0x5fa1a24, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ReadQuaternion(int32_t*  data) ;

/// @brief Method ReadVector2, addr 0x5fa19e0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ReadVector2(int32_t*  data) ;

/// @brief Method ReadVector3, addr 0x5fa19f4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ReadVector3(int32_t*  data) ;

/// @brief Method ReadVector4, addr 0x5fa1a0c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ReadVector4(int32_t*  data) ;

/// @brief Method WriteFloat, addr 0x5fa19c8, size 0x8, virtual false, abstract: false, final false
static inline void WriteFloat(int32_t*  data, float_t  f) ;

/// @brief Method WriteQuaternion, addr 0x5fa1a18, size 0xc, virtual false, abstract: false, final false
static inline void WriteQuaternion(int32_t*  data, ::UnityEngine::Quaternion  value) ;

/// @brief Method WriteVector2, addr 0x5fa19d8, size 0x8, virtual false, abstract: false, final false
static inline void WriteVector2(int32_t*  data, ::UnityEngine::Vector2  value) ;

/// @brief Method WriteVector3, addr 0x5fa19e8, size 0xc, virtual false, abstract: false, final false
static inline void WriteVector3(int32_t*  data, ::UnityEngine::Vector3  value) ;

/// @brief Method WriteVector4, addr 0x5fa1a00, size 0xc, virtual false, abstract: false, final false
static inline void WriteVector4(int32_t*  data, ::UnityEngine::Vector4  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadWriteUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadWriteUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadWriteUtils(ReadWriteUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadWriteUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadWriteUtils(ReadWriteUtils const& ) = delete;

/// @brief Field ACCURACY offset 0xffffffff size 0x4
static constexpr float_t  ACCURACY{static_cast<float_t>(1024.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ReadWriteUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
