#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonStreamQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonStreamQueue)
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonStreamQueue;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonStreamQueue*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonStreamQueue*, "Photon.Pun", "PhotonStreamQueue");
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonStreamQueue
class CORDL_TYPE PhotonStreamQueue : public ::System::Object {
public:
// Declarations
/// @brief Field m_IsWriting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsWriting, put=__cordl_internal_set_m_IsWriting)) bool  m_IsWriting;

/// @brief Field m_LastFrameCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFrameCount, put=__cordl_internal_set_m_LastFrameCount)) int32_t  m_LastFrameCount;

/// @brief Field m_LastSampleTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastSampleTime, put=__cordl_internal_set_m_LastSampleTime)) float_t  m_LastSampleTime;

/// @brief Field m_NextObjectIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextObjectIndex, put=__cordl_internal_set_m_NextObjectIndex)) int32_t  m_NextObjectIndex;

/// @brief Field m_Objects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Objects, put=__cordl_internal_set_m_Objects)) ::System::Collections::Generic::List_1<::System::Object*>*  m_Objects;

/// @brief Field m_ObjectsPerSample, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ObjectsPerSample, put=__cordl_internal_set_m_ObjectsPerSample)) int32_t  m_ObjectsPerSample;

/// @brief Field m_SampleCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SampleCount, put=__cordl_internal_set_m_SampleCount)) int32_t  m_SampleCount;

/// @brief Field m_SampleRate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SampleRate, put=__cordl_internal_set_m_SampleRate)) int32_t  m_SampleRate;

/// @brief Method BeginWritePackage, addr 0xa729b70, size 0x30c, virtual false, abstract: false, final false
inline void BeginWritePackage() ;

/// @brief Method Deserialize, addr 0xa72a1c4, size 0x1ac, virtual false, abstract: false, final false
inline void Deserialize(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method HasQueuedObjects, addr 0xa729fe4, size 0x10, virtual false, abstract: false, final false
inline bool HasQueuedObjects() ;

static inline ::Photon::Pun::PhotonStreamQueue* New_ctor(int32_t  sampleRate) ;

/// @brief Method ReceiveNext, addr 0xa729ff4, size 0x98, virtual false, abstract: false, final false
inline ::System::Object* ReceiveNext() ;

/// @brief Method Reset, addr 0xa729e7c, size 0x80, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SendNext, addr 0xa729efc, size 0xe8, virtual false, abstract: false, final false
inline void SendNext(::System::Object*  obj) ;

/// @brief Method Serialize, addr 0xa72a08c, size 0x138, virtual false, abstract: false, final false
inline void Serialize(::Photon::Pun::PhotonStream*  stream) ;

constexpr bool const& __cordl_internal_get_m_IsWriting() const;

constexpr bool& __cordl_internal_get_m_IsWriting() ;

constexpr int32_t const& __cordl_internal_get_m_LastFrameCount() const;

constexpr int32_t& __cordl_internal_get_m_LastFrameCount() ;

constexpr float_t const& __cordl_internal_get_m_LastSampleTime() const;

constexpr float_t& __cordl_internal_get_m_LastSampleTime() ;

constexpr int32_t const& __cordl_internal_get_m_NextObjectIndex() const;

constexpr int32_t& __cordl_internal_get_m_NextObjectIndex() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_m_Objects() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_m_Objects() ;

constexpr int32_t const& __cordl_internal_get_m_ObjectsPerSample() const;

constexpr int32_t& __cordl_internal_get_m_ObjectsPerSample() ;

constexpr int32_t const& __cordl_internal_get_m_SampleCount() const;

constexpr int32_t& __cordl_internal_get_m_SampleCount() ;

constexpr int32_t const& __cordl_internal_get_m_SampleRate() const;

constexpr int32_t& __cordl_internal_get_m_SampleRate() ;

constexpr void __cordl_internal_set_m_IsWriting(bool  value) ;

constexpr void __cordl_internal_set_m_LastFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastSampleTime(float_t  value) ;

constexpr void __cordl_internal_set_m_NextObjectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Objects(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_m_ObjectsPerSample(int32_t  value) ;

constexpr void __cordl_internal_set_m_SampleCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_SampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0xa729acc, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonStreamQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonStreamQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonStreamQueue(PhotonStreamQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonStreamQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonStreamQueue(PhotonStreamQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29708};

/// @brief Field m_SampleRate, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_SampleRate;

/// @brief Field m_SampleCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_SampleCount;

/// @brief Field m_ObjectsPerSample, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_ObjectsPerSample;

/// @brief Field m_LastSampleTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_LastSampleTime;

/// @brief Field m_LastFrameCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_LastFrameCount;

/// @brief Field m_NextObjectIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_NextObjectIndex;

/// @brief Field m_Objects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___m_Objects;

/// @brief Field m_IsWriting, offset: 0x30, size: 0x1, def value: None
 bool  ___m_IsWriting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_SampleRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_SampleCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_ObjectsPerSample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_LastSampleTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_LastFrameCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_NextObjectIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_Objects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStreamQueue, ___m_IsWriting) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonStreamQueue) == 0x38, "Size mismatch!");

} // namespace end def Photon::Pun
