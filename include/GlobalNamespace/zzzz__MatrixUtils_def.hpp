#pragma once
// IWYU pragma private; include "GlobalNamespace/MatrixUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MatrixUtils)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MatrixUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatrixUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatrixUtils*, "", "MatrixUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatrixUtils
class CORDL_TYPE MatrixUtils : public ::System::Object {
public:
// Declarations
/// @brief Method Clear, addr 0x5b0ac08, size 0x10, virtual false, abstract: false, final false
static inline void Clear(::by_ref<::UnityEngine::Matrix4x4>  m) ;

/// @brief Method Copy, addr 0x5b0ac18, size 0x5c, virtual false, abstract: false, final false
static inline void Copy(::by_ref<::UnityEngine::Matrix4x4>  from, ::by_ref<::UnityEngine::Matrix4x4>  to) ;

/// @brief Method MultiplyXYZ, addr 0x5b0ab34, size 0xd4, virtual false, abstract: false, final false
static inline void MultiplyXYZ(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Vector4>  point) ;

/// @brief Method MultiplyXYZ3x4, addr 0x5b0aaa4, size 0x90, virtual false, abstract: false, final false
static inline void MultiplyXYZ3x4(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Vector4>  point) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatrixUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatrixUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatrixUtils(MatrixUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatrixUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatrixUtils(MatrixUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MatrixUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
