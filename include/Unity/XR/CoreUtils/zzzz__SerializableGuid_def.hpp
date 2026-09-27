#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/SerializableGuid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableGuid)
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct SerializableGuid;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::SerializableGuid);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::SerializableGuid, "Unity.XR.CoreUtils", "SerializableGuid");
// Dependencies 
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: Unity.XR.CoreUtils.SerializableGuid
struct CORDL_TYPE SerializableGuid {
public:
// Declarations
 __declspec(property(get=get_Guid)) ::System::Guid  Guid;

/// @brief Field k_Empty, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_Empty, put=setStaticF_k_Empty)) ::Unity::XR::CoreUtils::SerializableGuid  k_Empty;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
constexpr operator  ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>*() ;

/// @brief Method Equals, addr 0xb3fa720, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb3fa7b8, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Unity::XR::CoreUtils::SerializableGuid  other) ;

/// @brief Method GetHashCode, addr 0xb3fa6e4, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb3fa7dc, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb3fa850, size 0x84, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0xb3fa8d4, size 0x8c, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method .ctor, addr 0xb3fa6dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  guidLow, uint64_t  guidHigh) ;

static inline ::Unity::XR::CoreUtils::SerializableGuid getStaticF_k_Empty() ;

/// @brief Method get_Empty, addr 0xb3fa678, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::XR::CoreUtils::SerializableGuid get_Empty() ;

/// @brief Method get_Guid, addr 0xb3fa6d0, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Guid() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>* i___System__IEquatable_1___Unity__XR__CoreUtils__SerializableGuid_() ;

/// @brief Method op_Equality, addr 0xb3fa960, size 0x78, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::XR::CoreUtils::SerializableGuid  lhs, ::Unity::XR::CoreUtils::SerializableGuid  rhs) ;

/// @brief Method op_Inequality, addr 0xb3fa9d8, size 0x78, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::XR::CoreUtils::SerializableGuid  lhs, ::Unity::XR::CoreUtils::SerializableGuid  rhs) ;

static inline void setStaticF_k_Empty(::Unity::XR::CoreUtils::SerializableGuid  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableGuid() ;

// Ctor Parameters [CppParam { name: "m_GuidLow", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GuidHigh", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializableGuid(uint64_t  m_GuidLow, uint64_t  m_GuidHigh) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_GuidLow, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_GuidLow;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_GuidHigh, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_GuidHigh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::SerializableGuid, m_GuidLow) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::SerializableGuid, m_GuidHigh) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::SerializableGuid) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
