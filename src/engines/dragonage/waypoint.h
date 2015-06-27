/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  A waypoint in a Dragon Age: Origins area.
 */

#ifndef ENGINES_DRAGONAGE_WAYPOINT_H
#define ENGINES_DRAGONAGE_WAYPOINT_H

#include "src/aurora/types.h"
#include "src/aurora/locstring.h"

#include "src/engines/dragonage/object.h"

namespace Engines {

namespace DragonAge {

class Waypoint : public Object {
public:
	/** Load from a waypoint instance. */
	Waypoint(const Aurora::GFF3Struct &waypoint);
	~Waypoint();

	/** Return the ID of the group this waypoint belongs to. */
	int32 getGroup() const;

	/** Does this waypoint have a map note? */
	bool hasMapNote() const;
	/** Return the waypoint's map note text. */
	Aurora::LocString getMapNote() const;

	/** Is the map note enabled? */
	bool enabledMapNote() const;

	/** Enable/Disable the waypoint's map note. */
	void enableMapNote(bool enabled);


private:
	int32 _group;

	bool _hasMapNote;
	bool _enabledMapNote;

	Aurora::LocString _mapNote;


	void load(const Aurora::GFF3Struct &waypoint);
};

} // End of namespace Dragon Age

} // End of namespace Engines

#endif // ENGINES_DRAGONAGE_WAYPOINT_H