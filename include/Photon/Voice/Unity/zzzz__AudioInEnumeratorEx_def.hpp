#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioInEnumeratorEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioInEnumeratorEx)
namespace Photon::Voice::Unity {
class AudioInEnumeratorEx___c__DisplayClass0_0;
}
namespace Photon::Voice {
struct DeviceInfo;
}
namespace Photon::Voice {
class IDeviceEnumerator;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AudioInEnumeratorEx;
}
namespace Photon::Voice::Unity {
class AudioInEnumeratorEx___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AudioInEnumeratorEx*);
MARK_REF_T(::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioInEnumeratorEx*, "Photon.Voice.Unity", "AudioInEnumeratorEx");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0*, "Photon.Voice.Unity", "AudioInEnumeratorEx/<>c__DisplayClass0_0");
// [Extension]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioInEnumeratorEx
class CORDL_TYPE AudioInEnumeratorEx : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0;

/// [Extension]
/// @brief Method IDAtIndex, addr 0xa767588, size 0xc0, virtual false, abstract: false, final false
static inline int32_t IDAtIndex(::Photon::Voice::IDeviceEnumerator*  en, int32_t  index) ;

/// [Extension]
/// @brief Method IDIsValid, addr 0xa76741c, size 0xd0, virtual false, abstract: false, final false
static inline bool IDIsValid(::Photon::Voice::IDeviceEnumerator*  en, int32_t  id) ;

/// [Extension]
/// @brief Method NameAtIndex, addr 0xa7674f4, size 0x94, virtual false, abstract: false, final false
static inline ::StringW NameAtIndex(::Photon::Voice::IDeviceEnumerator*  en, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInEnumeratorEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInEnumeratorEx(AudioInEnumeratorEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInEnumeratorEx(AudioInEnumeratorEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28874};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::AudioInEnumeratorEx) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioInEnumeratorEx/<>c__DisplayClass0_0
class CORDL_TYPE AudioInEnumeratorEx___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

static inline ::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <IDIsValid>b__0, addr 0xa767648, size 0x6c, virtual false, abstract: false, final false
inline bool _IDIsValid_b__0(::Photon::Voice::DeviceInfo  d) ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

/// @brief Method .ctor, addr 0xa7674ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInEnumeratorEx___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorEx___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInEnumeratorEx___c__DisplayClass0_0(AudioInEnumeratorEx___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorEx___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInEnumeratorEx___c__DisplayClass0_0(AudioInEnumeratorEx___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28873};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0, ___id) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AudioInEnumeratorEx___c__DisplayClass0_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
