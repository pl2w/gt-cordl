#pragma once
// IWYU pragma private; include "Fusion/Internal/UnitySurrogateBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySurrogateBase)
namespace Fusion::Internal {
class IUnitySurrogate;
}
// Forward declare root types
namespace Fusion::Internal {
class UnitySurrogateBase;
}
// Write type traits
MARK_REF_T(::Fusion::Internal::UnitySurrogateBase*);
DEFINE_IL2CPP_CLASS(::Fusion::Internal::UnitySurrogateBase*, "Fusion.Internal", "UnitySurrogateBase");
// Dependencies System.Object
namespace Fusion::Internal {
// Is value type: false
// CS Name: Fusion.Internal.UnitySurrogateBase
class CORDL_TYPE UnitySurrogateBase : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
constexpr operator  ::Fusion::Internal::IUnitySurrogate*() noexcept;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init(int32_t  capacity) ;

static inline ::Fusion::Internal::UnitySurrogateBase* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

/// @brief Method .ctor, addr 0x600c8ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
constexpr ::Fusion::Internal::IUnitySurrogate* i___Fusion__Internal__IUnitySurrogate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySurrogateBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySurrogateBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySurrogateBase(UnitySurrogateBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySurrogateBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySurrogateBase(UnitySurrogateBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Internal::UnitySurrogateBase) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Internal
