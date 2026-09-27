#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderHashId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderHashId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShaderHashId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderHashId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderHashId, "", "ShaderHashId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ShaderHashId
struct CORDL_TYPE ShaderHashId {
public:
// Declarations
 __declspec(property(get=get_hash)) int32_t  hash;

 __declspec(property(get=get_text)) ::StringW  text;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ShaderHashId>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ShaderHashId>*() ;

/// @brief Method Equals, addr 0x5b0eb2c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5b0eb1c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::ShaderHashId  other) ;

/// @brief Method GetHashCode, addr 0x5b0eacc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5b0eac4, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5b0ea90, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

/// @brief Method get_hash, addr 0x5b0ea88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_hash() ;

/// @brief Method get_text, addr 0x5b0ea80, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ShaderHashId>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ShaderHashId>* i___System__IEquatable_1___GlobalNamespace__ShaderHashId_() ;

/// @brief Method op_Equality, addr 0x5b0eba4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::ShaderHashId  x, ::GlobalNamespace::ShaderHashId  y) ;

/// @brief Method op_Implicit, addr 0x5b0eadc, size 0x40, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ShaderHashId op_Implicit___GlobalNamespace__ShaderHashId(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x5b0ead4, size 0x8, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::ShaderHashId  h) ;

/// @brief Method op_Inequality, addr 0x5b0ebb0, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::ShaderHashId  x, ::GlobalNamespace::ShaderHashId  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr ShaderHashId() ;

// Ctor Parameters [CppParam { name: "_text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShaderHashId(::StringW  _text, int32_t  _hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [FormerlySerializedAs("_hashText")]
/// [SerializeField]
/// @brief Field _text, offset: 0x0, size: 0x8, def value: None
 ::StringW  _text;

/// @brief Field _hash, offset: 0x8, size: 0x4, def value: None
 int32_t  _hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderHashId, _text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderHashId, _hash) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderHashId) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
