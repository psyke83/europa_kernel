/*
 * =====================================================================================
 *
 *       Filename:  lcdc_s6d_backlight.h
 *
 *    Description:  LCD BACKLIGHT Functions
 *
 *        Version:  1.0
 *        Created:  2010. 11. 25
 *       Revision:  1.0
 *       Compiler:  arm-linux-gcc
 *
 *         Author: File (System S/W Group Kernel Part), 
 *        Company: Samsung Electronics 
 *
 * =====================================================================================
 * * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 2 and only version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * END
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */



void lcdc_s6d_set_brightness_by_ktd259(int level);
void lcdc_s6d_set_brightness_by_aat1401(int level);

/*  BACKLIGHT Control GPIO */
#define GPIO_BL_CTRL	26

#define MAX_BRIGHTNESS_VALUE	255
#define MIN_BRIGHTNESS_VALUE	30
#define AAT_DIMMING_VALUE		29
#define KTD_DIMMING_VALUE		3
#define MAX_BRIGHTNESS_IN_BLU	32 // backlight-IC MAX VALUE

struct brt_value{
	int level;				// Platform setting values
	int tune_level;			// Chip Setting values
};


